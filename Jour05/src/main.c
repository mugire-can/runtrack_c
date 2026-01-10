#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_album
{
char*artist;
char*title;
intyear;
struct s_album*next;
}t_album;

t_album *read_file(char *filename);
void sort_albums(t_album *list, char *sort_by);
void display_albums(t_album *list);
void free_albums(t_album *list);

int main(int ac, char **av)
{
t_album *list;

if (ac != 3)
{
write(2, "Usage: music <file> <artist|title|year>\n", 41);
return (1);
}

list = read_file(av[1]);
if (list == NULL)
return (1);

sort_albums(list, av[2]);
display_albums(list);
free_albums(list);

return (0);
}
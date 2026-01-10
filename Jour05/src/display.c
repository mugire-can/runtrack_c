#include <unistd.h>
#include <stdlib.h>

typedef struct s_album
{
char*artist;
char*title;
intyear;
struct s_album*next;
}t_album;

int ft_strlen(char *s)
{
int i;

i = 0;
while (s[i])
i++;
return (i);
}

void write_number(int n)
{
char c;

if (n >= 10)
write_number(n / 10);
c = (n % 10) + '0';
write(1, &c, 1);
}

void display_albums(t_album *list)
{
t_album *current;

current = list;
while (current != NULL)
{
write(1, "\"", 1);
write(1, current->title, ft_strlen(current->title));
write(1, "\" by \"", 6);
write(1, current->artist, ft_strlen(current->artist));
write(1, "\" released in ", 14);
write_number(current->year);
write(1, ".\n", 2);
current = current->next;
}
}

void free_albums(t_album *list)
{
t_album *current;
t_album *next;

current = list;
while (current != NULL)
{
next = current->next;
free(current->artist);
free(current->title);
free(current);
current = next;
}
}
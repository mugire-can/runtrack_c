#include <stdlib.h>
#include <unistd.h>

typedef struct s_album
{
char*artist;
char*title;
intyear;
struct s_album*next;
}t_album;

int ft_strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] && s2[i] && s1[i] == s2[i])
i++;
return (s1[i] - s2[i]);
}

void sort_albums(t_album *list, char *sort_by)
{
t_album *current;
t_album *next;
char *temp_artist;
char *temp_title;
int temp_year;
int swap;

if (sort_by[0] != 'a' && sort_by[0] != 't' && sort_by[0] != 'y')
{
write(2, "Sort method does not exist.\n", 28);
return ;
}

current = list;
while (current != NULL)
{
next = current->next;
swap = 0;

while (next != NULL)
{
swap = 0;

if (sort_by[0] == 'a' && ft_strcmp(current->artist, next->artist) > 0)
swap = 1;
else if (sort_by[0] == 't' && ft_strcmp(current->title, next->title) > 0)
swap = 1;
else if (sort_by[0] == 'y' && current->year > next->year)
swap = 1;

if (swap)
{
temp_artist = current->artist;
temp_title = current->title;
temp_year = current->year;

current->artist = next->artist;
current->title = next->title;
current->year = next->year;

next->artist = temp_artist;
next->title = temp_title;
next->year = temp_year;
}

next = next->next;
}

current = current->next;
}
}
#include <stdlib.h>

typedef struct s_album_list
{
char*artist;
char*title;
intyear;
struct s_album_list*next;
}t_album_list;

void album_del_one(t_album_list **list, t_album_list *elem);

void album_del_one(t_album_list **list, t_album_list *elem)
{
t_album_list *current;
t_album_list *previous;

if (list == NULL || *list == NULL || elem == NULL)
return ;

current = *list;
previous = NULL;

while (current != NULL)
{
if (current == elem)
{
if (previous == NULL)
*list = current->next;
else
previous->next = current->next;

free(current);
return ;
}
previous = current;
current = current->next;
}
}
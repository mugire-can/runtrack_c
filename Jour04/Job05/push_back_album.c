#include <stdlib.h>

typedef struct s_album_list
{
char*artist;
char*title;
intyear;
struct s_album_list*next;
}t_album_list;

void push_back_album(t_album_list *list, t_album_list album);

void push_back_album(t_album_list *list, t_album_list album)
{
t_album_list *new_node;
t_album_list *current;

new_node = malloc(sizeof(t_album_list));
if (new_node == NULL)
return ;

new_node->artist = album.artist;
new_node->title = album.title;
new_node->year = album.year;
new_node->next = NULL;

current = list;
while (current->next != NULL)
current = current->next;

current->next = new_node;
}
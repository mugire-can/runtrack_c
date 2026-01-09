#include <stdlib.h>

typedef struct s_album_list
{
char*artist;
char*title;
intyear;
struct s_album_list*next;
}t_album_list;

t_album_list *push_front_album(t_album_list *list, t_album_list album);

t_album_list *push_front_album(t_album_list *list, t_album_list album)
{
t_album_list *new_node;

new_node = malloc(sizeof(t_album_list));
if (new_node == NULL)
return (list);

new_node->artist = album.artist;
new_node->title = album.title;
new_node->year = album.year;
new_node->next = list;

return (new_node);
}
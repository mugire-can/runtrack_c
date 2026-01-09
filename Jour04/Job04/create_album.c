#include <stdlib.h>

typedef struct s_album_list
{
char*artist;
char*title;
intyear;
struct s_album_list*next;
}t_album_list;

t_album_list *create_album(void);

t_album_list *create_album(void)
{
t_album_list *new_album;

new_album = malloc(sizeof(t_album_list));
if (new_album == NULL)
return (NULL);

new_album->artist = NULL;
new_album->title = NULL;
new_album->year = 0;
new_album->next = NULL;

return (new_album);
}
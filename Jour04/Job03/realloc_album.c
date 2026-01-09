#include <stdlib.h>

typedef struct s_album
{
char*title;
char*artist;
intyear;
}t_album;

t_album *realloc_album(t_album *albums, int size, int newsize);

t_album *realloc_album(t_album *albums, int size, int newsize)
{
t_album*new_albums;
inti;

new_albums = malloc(sizeof(t_album) * newsize);
if (new_albums == NULL)
return (NULL);

i = 0;
while (i < size)
{
new_albums[i].title = albums[i].title;
new_albums[i].artist = albums[i].artist;
new_albums[i].year = albums[i].year;
i = i + 1;
}

free(albums);
return (new_albums);
}

#include <stddef.h>

typedef struct s_album
{
char*title;
char*artist;
intyear;
}t_album;

t_album *find_by_artist(t_album *albums, int size, char *artist);

int str_equal(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (1);
i = i + 1;
}
return (0);
}

t_album *find_by_artist(t_album *albums, int size, char *artist)
{
int i;

i = 0;
while (i < size)
{
if (str_equal(albums[i].artist, artist))
return (&albums[i]);
i = i + 1;
}
return (NULL);
}

typedef struct s_album
{
char*title;
char*artist;
intyear;
}t_album;

int max_album_year(t_album *albums, int size);

int max_album_year(t_album *albums, int size)
{
int max;
int i;

if (size <= 0)
return (0);

max = albums[0].year;
i = 1;
while (i < size)
{
if (albums[i].year > max)
max = albums[i].year;
i = i + 1;
}

return (max);
}

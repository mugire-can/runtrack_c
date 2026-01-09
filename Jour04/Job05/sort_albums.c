typedef struct s_album
{
char*title;
char*artist;
intyear;
}t_album;

void sort_albums(t_album *albums, int size);

void sort_albums(t_album *albums, int size)
{
int i;
int j;
t_album temp;

i = 0;
while (i < size)
{
j = 0;
while (j < size - i - 1)
{
if (albums[j].year > albums[j + 1].year)
{
temp = albums[j];
albums[j] = albums[j + 1];
albums[j + 1] = temp;
}
j = j + 1;
}
i = i + 1;
}
}

typedef struct s_album
{
char*title;
char*artist;
intyear;
}t_album;

int main(void)
{
t_album album;

album.title = "Master of Puppets";
album.artist = "Metallica";
album.year = 1986;

return (0);
}

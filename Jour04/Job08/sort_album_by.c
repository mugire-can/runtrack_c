typedef struct s_album_list
{
char*artist;
char*title;
intyear;
struct s_album_list*next;
}t_album_list;

void sort_album_by(t_album_list *list, int (*fun)(t_album_list *, t_album_list *));

void sort_album_by(t_album_list *list, int (*fun)(t_album_list *, t_album_list *))
{
t_album_list *current;
t_album_list *next;
char *temp_artist;
char *temp_title;
int temp_year;

current = list;
while (current != NULL)
{
next = current->next;
while (next != NULL)
{
if (fun(current, next))
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
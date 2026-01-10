#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_album
{
char*artist;
char*title;
intyear;
struct s_album*next;
}t_album;

int ft_strlen(char *s)
{
int i;

i = 0;
while (s[i])
i++;
return (i);
}

char *ft_strdup(char *s)
{
char *copy;
int i;

copy = malloc(ft_strlen(s) + 1);
if (copy == NULL)
return (NULL);

i = 0;
while (s[i])
{
copy[i] = s[i];
i++;
}
copy[i] = '\0';
return (copy);
}

int ft_atoi(char *s)
{
int result;
int i;

result = 0;
i = 0;
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (result);
}

t_album *parse_line(char *line)
{
t_album *album;
int i;
int start;

album = malloc(sizeof(t_album));
if (album == NULL)
return (NULL);

i = 0;
start = 0;
while (line[i] && line[i] != ',')
i++;
if (line[i] != ',')
{
write(2, "Incorrect format.\n", 18);
free(album);
return (NULL);
}

album->artist = malloc(i - start + 1);
if (album->artist == NULL)
return (NULL);

i = 0;
while (line[start + i] && line[start + i] != ',')
{
album->artist[i] = line[start + i];
i++;
}
album->artist[i] = '\0';

start = start + i + 1;
i = 0;
while (line[start + i] && line[start + i] != ',')
i++;
if (line[start + i] != ',')
{
write(2, "Incorrect format.\n", 18);
free(album->artist);
free(album);
return (NULL);
}

album->title = malloc(i + 1);
if (album->title == NULL)
return (NULL);

i = 0;
while (line[start + i] && line[start + i] != ',')
{
album->title[i] = line[start + i];
i++;
}
album->title[i] = '\0';

start = start + i + 1;
album->year = ft_atoi(&line[start]);
album->next = NULL;

return (album);
}

t_album *read_file(char *filename)
{
int fd;
char buffer[1024];
int bytes;
int i;
t_album *list;
t_album *current;
t_album *new_album;

fd = open(filename, O_RDONLY);
if (fd < 0)
{
write(2, "File not found.\n", 16);
return (NULL);
}

list = NULL;
current = NULL;

while ((bytes = read(fd, buffer, 1024)) > 0)
{
i = 0;
while (i < bytes)
{
if (buffer[i] == '\n')
{
buffer[i] = '\0';
if (i > 0)
{
new_album = parse_line(buffer);
if (new_album == NULL)
{
close(fd);
return (list);
}

if (list == NULL)
list = new_album;
else
current->next = new_album;
current = new_album;
}
}
i++;
}
}

close(fd);
return (list);
}
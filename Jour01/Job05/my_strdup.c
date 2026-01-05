#include <stdlib.h>

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);

char *my_strdup(char *src)
{
char *dest;
int len;

len = my_strlen(src);
dest = malloc(len + 1);
if (dest == NULL)
return (NULL);
return (my_strcpy(dest, src));
}

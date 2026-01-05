#include <stdlib.h>

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);

static int is_space(char c)
{
if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
return (1);
return (0);
}

char *trim(char *src)
{
int i;
int j;
int len;
int start;
int end;
char *dest;

len = my_strlen(src);
start = 0;
while (start < len && is_space(src[start]))
start++;
if (start == len) {
dest = malloc(1);
if (dest != NULL)
dest[0] = '\0';
return (dest);
}
end = len - 1;
while (end >= start && is_space(src[end]))
end--;
dest = malloc(end - start + 2);
if (dest == NULL)
return (NULL);
i = 0;
j = start;
while (j <= end) {
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

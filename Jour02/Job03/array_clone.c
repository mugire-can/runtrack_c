#include <stdlib.h>

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);

char **array_clone(char **array, int n)
{
char **cloned;
int i = 0;
int count = 0;

while (array[count] != NULL && count < n)
count++;
cloned = malloc(sizeof(char *) * (count + 1));
if (cloned == NULL)
return (NULL);
while (i < count) {
cloned[i] = malloc(my_strlen(array[i]) + 1);
if (cloned[i] == NULL)
return (NULL);
my_strcpy(cloned[i], array[i]);
i++;
}
cloned[i] = NULL;
return (cloned);
}

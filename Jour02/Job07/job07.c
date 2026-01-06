#include <unistd.h>
#include <stdlib.h>

int my_strlen(char *str);

char *str_tolower(char *str)
{
char *result;
int i = 0;
int len;

len = my_strlen(str);
result = malloc(len + 1);
if (result == NULL)
return (NULL);
while (str[i] != '\0') {
if (str[i] >= 'A' && str[i] <= 'Z')
result[i] = str[i] + 32;
else
result[i] = str[i];
i++;
}
result[i] = '\0';
return (result);
}

void my_putchar(char c)
{
write(1, &c, 1);
}

void my_putstr(char *str)
{
int i = 0;

while (str[i] != '\0') {
my_putchar(str[i]);
i++;
}
}

int main(int argc, char **argv)
{
int i = 1;
char *lower_str;

while (i < argc) {
lower_str = str_tolower(argv[i]);
if (lower_str != NULL) {
my_putstr(lower_str);
my_putchar('\n');
free(lower_str);
}
i++;
}
return (0);
}

#include <unistd.h>

int my_putchar(char c);

int my_putstr(char *str)
{
int i = 0;

if (str == NULL)
return (-1);
while (str[i] != '\0') {
my_putchar(str[i]);
i++;
}
return (0);
}

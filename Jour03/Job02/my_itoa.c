char *my_itoa(int n);

#include <stdlib.h>

char *my_itoa(int n)
{
char *str;
int temp = n;
int len = 0;
int i = 0;

if (n == 0)
len = 1;
else if (n < 0)
len = 1;
while (temp != 0)
{
len++;
temp /= 10;
}

str = malloc(len + 1);
if (str == NULL)
return (NULL);

str[len] = '\0';
if (n == 0)
str[0] = '0';
else if (n < 0)
{
str[0] = '-';
n = -n;
i = 1;
while (n > 0)
{
str[len - 1] = (n % 10) + '0';
n /= 10;
len--;
}
}
else
{
i = len - 1;
while (n > 0)
{
str[i] = (n % 10) + '0';
n /= 10;
i--;
}
}

return (str);
}


int my_atoi(char *str);

#include <stddef.h>

int my_atoi(char *str)
{
int result = 0;
int sign = 1;
int i = 0;

if (str == NULL)
return (0);

while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
i++;

if (str[i] == '-')
sign = -1;
if (str[i] == '-' || str[i] == '+')
i++;

while (str[i] >= '0' && str[i] <= '9')
{
result = result * 10 + (str[i] - '0');
i++;
}

return (result * sign);
}

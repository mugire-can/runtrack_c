#include <unistd.h>
#include <stdlib.h>

void print_number(int n)
{
char c;

if (n >= 10)
print_number(n / 10);
c = (n % 10) + 48;
write(1, &c, 1);
}

int main(int ac, char **av)
{
int n;
int result;
int i;

if (ac != 2)
return (0);
n = atoi(av[1]);
result = 1;
i = 1;
while (i <= n)
{
result = result * i;
i = i + 1;
}
print_number(result);
write(1, "\n", 1);
return (0);
}

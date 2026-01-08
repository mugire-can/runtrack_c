#include <unistd.h>
#include <stdlib.h>

int fact(int n)
{
int r = 1;
int i = 2;

while (i <= n)
r *= i++;
return (r);
}

void put_nbr(int n)
{
if (n >= 10)
put_nbr(n / 10);
write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
if (ac == 2)
{
put_nbr(fact(atoi(av[1])));
write(1, "\n", 1);
}
return (0);
}

#include <unistd.h>
#include <stdlib.h>

int fib(int n)
{
if (n <= 1)
return (n);
return (fib(n - 1) + fib(n - 2));
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
put_nbr(fib(atoi(av[1])));
write(1, "\n", 1);
}
return (0);
}

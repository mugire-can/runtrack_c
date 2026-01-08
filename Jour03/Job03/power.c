int power(int n, int power);

int power(int n, int power)
{
int result = 1;
int i = 0;

if (power < 0)
return (0);

while (i < power)
{
result *= n;
i++;
}

return (result);
}

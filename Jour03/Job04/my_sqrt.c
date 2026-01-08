int my_sqrt(int n);

int my_sqrt(int n)
{
int i = 0;

while (i * i < n)
i++;
if (i * i == n)
return (i);
return (0);
}

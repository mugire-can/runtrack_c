int my_sqrt(int n);

int my_sqrt(int n)
{
int i;

i = 0;
while (i * i < n)
i = i + 1;
if (i * i == n)
return (i);
return (0);
}

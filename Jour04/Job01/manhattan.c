typedef struct s_point
{
intx;
inty;
}t_point;

int manhattan(t_point a, t_point b);

int manhattan(t_point a, t_point b)
{
int distance;

if (a.x > b.x)
distance = a.x - b.x;
else
distance = b.x - a.x;

if (a.y > b.y)
distance = distance + (a.y - b.y);
else
distance = distance + (b.y - a.y);

return (distance);
}
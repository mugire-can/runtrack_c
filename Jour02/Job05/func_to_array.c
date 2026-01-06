void func_to_array(char **array, void (*func)(char *))
{
int i = 0;

while (array[i] != NULL) {
func(array[i]);
i++;
}
}

#include <unistd.h>
#include <stdlib.h>

int my_strlen(char *str);
char *trim(char *src);
int my_strcmp(char *s1, char *s2);

void swap_strings(char *s1, char *s2)
{
char temp[1000];
int i = 0;

while (s1[i] != '\0') {
temp[i] = s1[i];
i++;
}
temp[i] = '\0';
i = 0;
while (s2[i] != '\0') {
s1[i] = s2[i];
i++;
}
s1[i] = '\0';
i = 0;
while (temp[i] != '\0') {
s2[i] = temp[i];
i++;
}
s2[i] = '\0';
}

void my_putchar(char c)
{
write(1, &c, 1);
}

void my_putstr(char *str)
{
int i = 0;

while (str[i] != '\0') {
my_putchar(str[i]);
i++;
}
}

int main(int argc, char **argv)
{
int i = 1;
int j = 0;
int arg_count = argc - 1;
char **trimmed_args;
int swapped;

if (arg_count == 0)
return (0);
trimmed_args = malloc(sizeof(char *) * (arg_count + 1));
if (trimmed_args == NULL)
return (1);
while (i <= arg_count) {
trimmed_args[i - 1] = trim(argv[i]);
if (trimmed_args[i - 1] == NULL) {
free(trimmed_args);
return (1);
}
i++;
}
trimmed_args[arg_count] = NULL;
swapped = 1;
i = arg_count;
while (swapped) {
swapped = 0;
j = 0;
while (j < i - 1) {
if (my_strcmp(trimmed_args[j], trimmed_args[j + 1]) > 0) {
swap_strings(trimmed_args[j], trimmed_args[j + 1]);
swapped = 1;
}
j++;
}
i--;
}
i = 0;
while (i < arg_count) {
my_putstr(trimmed_args[i]);
if (i < arg_count - 1)
my_putchar(' ');
free(trimmed_args[i]);
i++;
}
free(trimmed_args);
my_putchar('\n');
return (0);
}

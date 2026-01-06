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

void sort(char **array)
{
int i = 0;
int j = 0;
int swapped = 1;

while (array[i] != NULL)
i++;
while (swapped) {
swapped = 0;
j = 0;
while (j < i - 1) {
if (my_strcmp(array[j], array[j + 1]) > 0) {
swap_strings(array[j], array[j + 1]);
swapped = 1;
}
j++;
}
i--;
}
}

int my_strcmp(char *s1, char *s2)
{
int i = 0;

if (s1 == NULL || s2 == NULL) {
if (s1 == s2)
return (0);
return (s1 == NULL ? -1 : 1);
}
while (s1[i] != '\0' && s2[i] != '\0') {
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
return (s1[i] - s2[i]);
}

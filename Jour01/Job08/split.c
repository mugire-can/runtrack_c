#include <stdlib.h>

int my_strlen(char *str);

static int is_space(char c)
{
if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
return (1);
return (0);
}

static int count_words(char *str)
{
int count = 0;
int i = 0;
int in_word = 0;

while (str[i] != '\0') {
if (!is_space(str[i])) {
if (!in_word) {
count++;
in_word = 1;
}
} else {
in_word = 0;
}
i++;
}
return (count);
}

static void free_result(char **result, int count)
{
int i = 0;

while (i < count) {
free(result[i]);
i++;
}
free(result);
}

char **split(char *str)
{
char **result;
int word_count;
int i = 0;
int j = 0;
int word_len = 0;
int word_index = 0;

if (str == NULL)
return (NULL);
word_count = count_words(str);
result = malloc(sizeof(char *) * (word_count + 1));
if (result == NULL)
return (NULL);
while (str[i] != '\0') {
if (!is_space(str[i])) {
word_len++;
} else {
if (word_len > 0) {
result[word_index] = malloc(word_len + 1);
if (result[word_index] == NULL) {
free_result(result, word_index);
return (NULL);
}
j = 0;
while (j < word_len) {
result[word_index][j] = str[i - word_len + j];
j++;
}
result[word_index][word_len] = '\0';
word_index++;
word_len = 0;
}
}
i++;
}
if (word_len > 0) {
result[word_index] = malloc(word_len + 1);
if (result[word_index] == NULL) {
free_result(result, word_index);
return (NULL);
}
j = 0;
while (j < word_len) {
result[word_index][j] = str[i - word_len + j];
j++;
}
result[word_index][word_len] = '\0';
word_index++;
}
result[word_index] = NULL;
return (result);
}

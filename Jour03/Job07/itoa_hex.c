char *itoa_hex(int n);

#include <stdlib.h>

char *itoa_hex(int n)
{
	char *result;
	char *hex;
	int i;
	int len;
	int temp;

	hex = "0123456789ABCDEF";
	result = malloc(20);
	if (result == NULL)
		return (NULL);
	
	if (n == 0)
	{
		result[0] = '0';
		result[1] = 'x';
		result[2] = '0';
		result[3] = '\0';
		return (result);
	}
	
	i = 0;
	temp = n;
	while (temp > 0)
	{
		i = i + 1;
		temp = temp / 16;
	}
	
	result[0] = '0';
	result[1] = 'x';
	len = i + 2;
	result[len] = '\0';
	
	while (n > 0 && i > 0)
	{
		result[i + 1] = hex[n % 16];
		n = n / 16;
		i = i - 1;
	}
	
	return (result);
}

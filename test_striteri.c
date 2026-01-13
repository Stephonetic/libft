
#include <stdio.h>
#include "libft.h"

void	to_upper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	add_index(unsigned int i, char *c)
{
	if (*c >= '0' && *c <= '9')
		*c = *c + (i % 10);
}

int	main(void)
{
	char	str1[] = "abcdefg";
	char	str2[] = "hello";

	printf("Test 1: to_upper_if_even\n");
	printf("Before: %s\n", str1);
	ft_striteri(str1, to_upper_if_even);
	printf("After:  %s\n", str1);
	printf("Expected: AbCdEfG\n\n");

	printf("Test 2: add_index\n");
	printf("Before: %s\n", str2);
	ft_striteri(str2, add_index);
	printf("After:  %s\n", str2);

	printf("\nTest 3: NULL handling\n");
	ft_striteri(NULL, to_upper_if_even);
	printf("Passed NULL for string (no crash)\n");

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 04:03:00 by shannema          #+#    #+#             */
/*   Updated: 2026/01/15 02:22:42 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*fill_str(char *str, int n, int len)
{
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		while (--len > 0)
		{
			str[len] = '0' - (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (--len >= 0)
		{
			str[len] = '0' + (n % 10);
			n /= 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	return (fill_str(str, n, len));
}
// Example usage
// Compile with: cc ft_itoa.c -o test && ./test
// Converts different ints into strings and prints them out :D
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }
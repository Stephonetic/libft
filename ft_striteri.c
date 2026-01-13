/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:47:06 by shannema          #+#    #+#             */
/*   Updated: 2026/01/13 22:24:58 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// #include "libft.h"

// void to_upper_if_even(unsigned int i, char *c)
// {
//     if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

// int main(void)
// {
//     char str[] = "abcdefg";
//     ft_striteri(str, to_upper_if_even);
//     printf("%s\n", str); // Expected: "AbCdEfG"
//     return 0;
// }
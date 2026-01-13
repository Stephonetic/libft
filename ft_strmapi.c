/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:20:07 by shannema          #+#    #+#             */
/*   Updated: 2026/01/13 20:40:17 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	res = (char*)malloc(ft_strlen(s) + 1); //allocate a new buffer of length (ft_strlen(s) + 1) using malloc)
	if (!res)
		return (NULL);//return NULL on failure
	i = 0;//iterate over s with an unsigned int index i
	while (s[i])//for each char set res[i] = '\0'
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
//create testprogram: test_ft_strmapi.c
// #include <stdio.h>
// #include "libft.h"

// char	map(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*r = ft_strmapi("hello42", map);

// 	if (r)
// 	{
// 		printf("%s\n", r); // expected: HELLO42
// 		free(r);
// 	}
// 	return (0);
// }
//then compile and run with:
//gcc -Wall -Wextra -Werror ft_strmapi.c ft_strlen.c test_strmapi.c -I. -o test_strmapi
// ./test_strmapi
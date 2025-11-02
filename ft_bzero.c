/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:52:38 by shannema          #+#    #+#             */
/*   Updated: 2025/11/02 22:03:23 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (size > 0)
	{
		*(tmp_ptr++) = '\0';
		size--;
	}
}

//void is undefined, you have to clarifz it in the folllwing lines
//the definition of "temporary" is declaring the string of bzero, since
//  it gets set to zero
//definition of void datatype, char * should be temp pointer, so
//  it can be assigned to a variable = type casting! Necessary for void type!

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char *p = s;
// 	while (n--)
// 	*p++ = 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char a[5] = "abcd";
// 	ft_bzero(a+1,2);
// 	printf("%d\n", a[1]);
// 	return (0);
// }

// int	main(void)
// {
// 	char str[10] = "help me";

// 	ft_bzero(str, 2);
// 	printf("%s\n", str + 3);
// 	return (0);
// }

// char *str;

// str = "help me";
// char str[10];

// n = 5;
// [h]  [e]  [l]  [p]  []   [m] [e] [\0]  // string size = 8
// [\0] [\0] [\0] [\0] [\0] [m] [e] [\0]
// [0]  [1]  [2]  [3]  [4]  [5] [6] [7]

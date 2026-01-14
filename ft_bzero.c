/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:52:38 by shannema          #+#    #+#             */
/*   Updated: 2026/01/14 22:18:03 by shannema         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[10] = "help me";

// 	ft_bzero(str, 2);
// 	printf("%s\n", str + 2);
// 	return (0);
// }

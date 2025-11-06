/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:53:51 by shannema          #+#    #+#             */
/*   Updated: 2025/11/06 14:18:43 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// # include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isdigit('2'));
// 	printf("%d\n", ft_isdigit('a'));
// 	return (0);
// }
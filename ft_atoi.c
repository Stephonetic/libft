/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:31:16 by shannema          #+#    #+#             */
/*   Updated: 2026/01/02 17:05:53 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		index;
	int		sign;
	long	nbr;

	index = 0;
	sign = 1;
	nbr = 0;
	while (nptr[index] && (nptr[index] <= 32))
		index++;
	if (nptr[index] && (nptr[index] == '-' || nptr[index] == '+'))
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (nptr[index] && ft_isdigit(nptr[index]))
		nbr = (nbr * 10) + (nptr[index++] - '0');
	return (nbr * sign);
}

// str = "100";
// nbr = 0;
// bvr = nbr * 10;
// nbr = 0;
// 0 + 1;
// nbr = 1;
// 1 * 10
// 10 + 0;
// 10
// nbr = 10;
// 10 * 10;
// 100
// 100 - 0
// nbr = 100

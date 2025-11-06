/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:46:28 by shannema          #+#    #+#             */
/*   Updated: 2025/11/06 17:41:47 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size > len + 1)
	{
		ft_memcpy(dst, src, len + 1);
	}
	else if (size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (len);
}
// int main()
// {
// 	char dst[20] = "Whazzup";
// 	const char *src = "The World is spinning out of orbit Oh NO";

// 	size_t res = ft_strlcpy(dst, src, 0);
// 	printf("%s, %zu\n", dst, res);
// }
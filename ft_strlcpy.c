/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:46:28 by shannema          #+#    #+#             */
/*   Updated: 2025/11/05 20:35:43 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;//we define the length of size t, its the one we want to go through

	len = ft_strlen(src);

	if (size > len + 1)//if the size is bigger than the length of our function (defined through ft strlen(adjusted with the null terminator (+1)),...
	{
		ft_memcpy(dst, src, len + 1); //function can be copied, reminder to always include  null termination of the string ( +1)
	}
	else if (size)// is size larger than 0? if it was an int I'd have to specify the range of the size ("size > 0")
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (len);
}

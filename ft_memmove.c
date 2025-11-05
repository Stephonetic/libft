/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:36 by shannema          #+#    #+#             */
/*   Updated: 2025/11/05 20:28:15 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptr_dest = (char *) dest;
	ptr_src = (const char *) src;
	i = 0;
	if (ptr_dest < ptr_src)
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}	
	}
	else
	{
		while (n-- > 0)
		{
			ptr_dest[n] = ptr_src[n];
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:36 by shannema          #+#    #+#             */
/*   Updated: 2025/11/03 20:13:25 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	// 	 The  memmove() function copies n bytes from memory area src to memory area dest.

	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{	
		*ptr_dest++ = *ptr_src++;
		n--;
	if (dest[n] == src[n])
		{
		src[n] = ptr_dest;
		}
	}


	return (dest);


}

// 	 The memory areas may overlap: copying takes place as though the bytes in src are first copied into
//        a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
// }
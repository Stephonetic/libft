/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:51:03 by shannema          #+#    #+#             */
/*   Updated: 2026/01/02 17:06:46 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*ptr_dest++ = *ptr_src++;
		n--;
	}
	return (dest);
}

// ptr_dest[i] = ptr_src[i];
// i++;
// n--;

// int main(void)
// {
// }

//edge case, because paco crashed!! 
//its not an int, it's the definition of NULL! NULL = empty string
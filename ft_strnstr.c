/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:04:20 by shannema          #+#    #+#             */
/*   Updated: 2025/12/12 16:46:45 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	int	index;
// 	if(ft_strlen(little) == 0)
// 		return (big);
// 	else if(ft_strlen())
// 		return (*little);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);//if needle empty string, return haystack
	i = 0;
	while (i <= len - little_len && big[i])
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]); //otherwise a pointer to the first character of the first occurrence of needle is returned.
		i++;
	}
	return (NULL);//if needle occurs nowhere in haystack, NULL is returned; 
}

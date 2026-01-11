/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 22:06:46 by shannema          #+#    #+#             */
/*   Updated: 2026/01/11 22:46:33 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0; //initialize start like index with 0
	while (s1[start] && ft_strchr(set, s1[start]))
		start++; //we increase the characters from start 
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc(end - start + 1);//Returns a new malloc’d string containing the trimmed result.
	if (!trim)
		return (NULL);
	ft_strlcpy (trim, s1 + start, end - start + 1);
	return (trim);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*trimmed;

// 	s = " \n\tBaBaBOI , Fuck My Life\t\n";
// 	trimmed = ft_strtrim(s, " \n\t");
// 	printf("%s\n", trimmed);
// 	free(trimmed);
// }

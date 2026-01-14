/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:45:36 by shannema          #+#    #+#             */
/*   Updated: 2026/01/14 22:21:35 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_presplit(char const *s, char **result, char c)
{
	int	i;
	int	count;
	int	start;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[count] = ft_substr(s, start, i - start + 1);
			if (!result[count])
			{
				while (count > 0)
					free(result[--count]);
				return (free(result), NULL);
			}
			count++;
		}
		i++;
	}
	return (result[count] = NULL, result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	result = ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	return (ft_presplit(s, result, c));
}

// int	main(void)
// {
// 	char	**dst;

// 	dst = ft_split("nonempty", '\0');
// 	main_sub(dst);
// }

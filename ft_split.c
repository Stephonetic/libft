/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:45:36 by shannema          #+#    #+#             */
/*   Updated: 2026/01/12 03:56:57 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// char	**ft_split(char const *s, char c)
// {
// 	char	**adress;
// 	int	wordcounter;
// 	int	counter;

// 	wordcounter = ft_wordcount(s, c);
// 	adress = (char **)malloc((wordcounter + 1) * sizeof(char *));
// 	counter = 0;

// 	if (!s)
// 		return (NULL);
// 	adress = malloc((ft_wordcount + 1) * size0f(char *));
// 	if (!adress)
// 		return (NULL);
// 	while (s[counter] != '\0')
// 	{
// 		if (s[counter] == c)
// 		{
// 		}
// 		counter++;
// 	}

// 	return (adress);
// }

// char	*string;
// char	*string = "Hallo";

// string = malloc(wordcount);

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
// void	main_sub(char **dst)
// {
// 	size_t	j;

// 	j = 0;
// 	if (dst == NULL || dst[0] == NULL)
// 	{
// 		printf("%zu: NULL\n", j);
// 		return ;
// 	}
// 	for (size_t i = 0;; i++)
// 	{
// 		if (dst[i] != NULL)
// 		{
// 			j = 0;
// 			printf("%zu: (%s)\n", i, dst[i]);
// 			while (dst[i][j] != '\0')
// 			{
// 				printf("  [%zu][%zu]: %c\n", i, j, dst[i][j]);
// 				j++;
// 			}
// 			printf("  [%zu][%zu]: NULL\n", i, j);
// 		}
// 		else
// 		{
// 			printf("%zu: NULL\n", i);
// 			break ;
// 		}
// 	}
// }

// int	main(void)
// {
// 	char	**dst;

// 	dst = ft_split("nonempty", '\0');
// 	main_sub(dst);
// }

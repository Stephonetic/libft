/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:15:00 by shannema          #+#    #+#             */
/*   Updated: 2026/01/09 01:46:14 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	count_str_len1;
	size_t	count_str_len2;
	char	*result;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		count_str_len1 = 0;
	else
		count_str_len1 = ft_strlen(s1);
	if (!s2)
		count_str_len2 = 0;
	else
		count_str_len2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (count_str_len1 + count_str_len2 + 1));
	if (!result)
		return (NULL);
	if (count_str_len1 > 0)
		ft_strlcpy(result, s1, count_str_len1 + 1);
	else
		result[0] = '\0';
	if (count_str_len2 > 0)
		ft_strlcpy(result + count_str_len1, s2, count_str_len2 + 1);
	return (result);
}

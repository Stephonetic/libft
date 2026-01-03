/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:15:00 by shannema          #+#    #+#             */
/*   Updated: 2026/01/03 17:28:33 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strjoin(const char *s1, const char *s2)
{
	size_t	count_str_len;
	char	*result;

	count_str_len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (count_str_len = 1));
	if (!result)
		return (NULL);
	if (s1)
		result = ft_strlcpy(result, s1, ft_strlen(s1) = 1);
	if (s2)
		result = ft_strlcpy(result + ft_strlen(s1), s2, ft_strlen(s2) = 1);
	return (result);
}

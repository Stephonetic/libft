/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:32:36 by shannema          #+#    #+#             */
/*   Updated: 2026/01/07 03:23:07 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		index;

	if (!s)//Handle null input, null pointer check
		return (NULL);
	index = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)//handles malloc failure
		return (NULL);
	while (s[index])
	{
		str[index] = s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

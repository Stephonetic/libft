/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:32:36 by shannema          #+#    #+#             */
/*   Updated: 2026/01/02 17:21:53 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*str;
	int		index;

	index = 0;
	str = malloc(sizeof(char)*ft_strlen(s + 1));
	while (s[index])
	{
		str[index] = s[index];
		index++;
	}
	str [index] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:23:42 by shannema          #+#    #+#             */
/*   Updated: 2025/11/06 18:34:38 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

//other solution (to be checked)
// char *ft_strchr(const char *s, int c)
// {
//     size_t i = 0;
//     while (s[i])
//     {
//         if (s[i] == (char)c)
//             return ((char *)&s[i]);
//         i++;
//     }
//     /* check for terminating NUL */
//     if (c == '\0')
//         return ((char *)&s[i]);
//     return (NULL);
// }

// int main()
// {
// 	char *str = "TEST 123 ,c sdasd  r3ewd";
// 	printf("%s\n", ft_strchr(str, 'a'));
// }
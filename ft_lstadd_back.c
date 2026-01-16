/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:45:37 by shannema          #+#    #+#             */
/*   Updated: 2026/01/16 20:42:08 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

// #include "libft.h"

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last;

// 	last = ft_lstlast(*lst);
// 	if (!last)
// 		*lst = new;
// 	else
// 		last->next = new;
// }

//visual walkthrough:

// Initial list:
// lst -> [1] -> [2] -> NULL

// new:
// [new] -> NULL

// After function:
// lst -> [1] -> [2] -> [new] -> NULL
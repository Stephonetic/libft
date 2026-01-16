/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:26:13 by shannema          #+#    #+#             */
/*   Updated: 2026/01/16 20:39:45 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, free);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, free);
			return (del(new_content), NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
//crashed code: To look into:

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*new_node;
// 	void	*new_content;

// 	new_content = f(lst->content);
// 	new_lst = NULL;

// 	while (lst != NULL)
// 	{
// 		if (new_content == NULL)
// 		{
// 			ft_lstclear(&new_lst, del);
// 			return (NULL);
// 		}
// 		new_node = ft_lstnew(new_content);
// 		if (new_node == NULL)
// 		{
// 			ft_lstclear(&new_lst, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new_lst, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_lst);
// }
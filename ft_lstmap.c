/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:27:19 by yhmada            #+#    #+#             */
/*   Updated: 2021/12/04 18:57:27 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_struct;

	if (!lst || !f)
		return (NULL);
	if (lst->next == NULL)
	{
		new_list = ft_lstnew(f(lst -> content));
		return (new_list);
	}
	new_list = ft_lstnew(f(lst -> content));
	while (lst -> next)
	{
		lst = lst->next;
		new_struct = ft_lstnew(f(lst->content));
		if (!new_struct)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_struct);
	}
	return (new_list);
}

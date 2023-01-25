/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:26:00 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 14:33:06 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*looper;

	if (!lst)
		return ;
	while (*lst)
	{
		looper = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = looper;
	}
}

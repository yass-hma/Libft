/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:26:38 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/27 12:34:10 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*looper;

	looper = lst;
	if (!lst || !f)
		return ;
	while (looper -> next != NULL)
	{
		f(looper->content);
		looper = looper->next;
	}
	f(looper->content);
}

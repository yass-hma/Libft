/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:23:22 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/27 12:25:39 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*looper;
	int		size_list;

	looper = lst;
	size_list = 1;
	if (!lst)
		return (0);
	while (looper -> next != NULL)
	{
		size_list += 1;
		looper = looper -> next;
	}
	return (size_list);
}

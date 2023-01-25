/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:24:16 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 00:50:12 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*looper;

	looper = lst;
	if (!lst)
		return (NULL);
	while (looper->next != NULL)
		looper = looper->next;
	return (looper);
}

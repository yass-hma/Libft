/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:24:42 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/27 12:43:37 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*looper;

	if (!alst || !new)
		return ;
	if (*alst == NULL)
		*alst = new;
	else
	{
		looper = ft_lstlast(*alst);
		if (!looper)
			return ;
		looper->next = new;
	}
}

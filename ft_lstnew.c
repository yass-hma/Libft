/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:21:45 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 12:46:25 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_stru;

	new_stru = malloc(sizeof(t_list));
	if (!new_stru)
		return (NULL);
	new_stru->content = content;
	new_stru->next = NULL;
	return (new_stru);
}

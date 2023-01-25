/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:01:01 by yhmada            #+#    #+#             */
/*   Updated: 2021/12/04 23:15:01 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*alloc ;
	int		size_buffer;
	int		i;

	i = 0;
	size_buffer = count * size ;
	alloc = malloc(size_buffer);
	if (!alloc)
		return (NULL);
	while (size_buffer > i)
		alloc[i++] = 0;
	return (alloc);
}

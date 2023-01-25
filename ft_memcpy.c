/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 08:05:34 by yhmada            #+#    #+#             */
/*   Updated: 2021/12/05 00:45:57 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	while (len > i)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

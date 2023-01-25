/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <yhmada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 08:39:42 by yhmada            #+#    #+#             */
/*   Updated: 2021/12/05 00:45:32 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	char	ch;

	ch = (unsigned char)c ;
	str = (char *)s;
	i = 0;
	while (n > i)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}

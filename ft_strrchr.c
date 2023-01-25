/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:49:46 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 17:53:37 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (c == '\0')
		return ((char *)(str + (i + 1)));
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

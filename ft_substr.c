/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:26:47 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 18:34:34 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*copy;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	if ((unsigned int )ft_strlen(str) < len)
		copy = (char *)malloc(ft_strlen(str) + 1);
	else
		copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	while (str[i])
	{
		if (i >= start && len > j)
		{
			copy[j] = str[i];
			j++;
		}
		i++;
	}
	copy[j] = '\0';
	return (copy);
}

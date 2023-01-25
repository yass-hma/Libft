/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:16 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/14 04:26:33 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	copy = malloc(i + 1);
	if (copy != NULL)
	{
		while (src[j])
		{
			copy[j] = src[j];
			j++;
		}
		copy[j] = '\0';
		return (copy);
	}
	else
		return (NULL);
}

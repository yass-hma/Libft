/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:45:59 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/29 01:40:35 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n - 1 > i && s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		i++;
	return ((unsigned char )s1[i] - (unsigned char )s2[i]);
}

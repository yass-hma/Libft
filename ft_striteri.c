/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:08:30 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/26 22:54:57 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	lenght_str;

	i = 0;
	lenght_str = 0;
	if (!s || !f)
		return ;
	while (s[lenght_str])
		lenght_str++;
	while (i < lenght_str)
	{
		f(i, (s + i));
		i++;
	}
}

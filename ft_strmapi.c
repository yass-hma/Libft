/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:33:19 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 01:01:54 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char				*new_str;
	unsigned int		size_str;
	unsigned int		i;

	i = 0;
	size_str = 0;
	if (!str)
		return (NULL);
	while (str[size_str])
		size_str++;
	new_str = (char *)malloc(size_str + 1);
	if (!new_str)
		return (NULL);
	while (size_str > i)
	{
		new_str[i] = f(i, str[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 08:52:18 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/21 10:57:51 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static void	ft_strcpy(char *dest, char const *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (src[j])
		j++ ;
	while (i < j + 1)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	ft_strcat(char *dest, char const *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*str_return;

	i = 0;
	j = 0;
	if (!s1 ||!s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	str_return = malloc(sizeof(char) * (size + 1));
	if (!str_return)
		return (NULL);
	ft_strcpy(str_return, s1);
	ft_strcat(str_return, s2);
	return (str_return);
}

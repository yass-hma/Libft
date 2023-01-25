/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:31:51 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 13:16:32 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	ft_instrchr(char const *str, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	beigne_string(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_instrchr(set, s[i]))
			i++;
		else
			return (i);
	}
	return (i);
}

static int	end_string(char const *s, char const *set)
{
	int	i;
	int	size_end;

	i = ft_strlen(s) - 1;
	size_end = 0;
	while (i >= 0)
	{
		if (ft_instrchr(set, s[i]))
		{
			i--;
			size_end++;
		}
		else
			return (size_end);
	}
	return (size_end);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int	start;
	int	end;
	int	size_str;

	if (!s || !set)
		return (NULL);
	if (ft_strlen(set) == 0)
		return (ft_strdup(s));
	size_str = ft_strlen(s);
	start = beigne_string(s, set);
	if (start == size_str)
		return (ft_substr("", 0, 0));
	end = end_string(s, set);
	return (ft_substr(s, (unsigned int) start, (size_str - (end + start))));
}
/*
int main()
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, " \n\t");
	printf("%s \n",ret);
	printf("%d \n",strcmp(ret, s2));
	return 0;
}*/

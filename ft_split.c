/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:43:55 by yhmada            #+#    #+#             */
/*   Updated: 2021/12/04 18:52:42 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_size(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			while (s[i] == c && s[i])
				i++;
		}
	}
	return (size);
}

static int	count_size_arr(char const *s, char c)
{
	static int	i = 0;
	int			j;

	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}

static char	**ft_free(char **arr, int i)
{
	if (i > 0)
	{
		while (i >= 0)
		{
			i--;
			free(arr[i]);
		}
	}
	free(arr);
	return (NULL);
}

static char	**remplire(char **new_arr, char const *s, char c, int size_arr)
{
	int	i;
	int	j;
	int	size_word;
	int	k;

	i = 0;
	j = 0;
	while (size_arr > i)
	{
		k = 0;
		size_word = count_size_arr(s, c);
		while (s[j] == c && s[j])
			j++;
		new_arr[i] = malloc(size_word + 1);
		if (!new_arr[i])
			return (ft_free(new_arr, i));
		while (s[j] != c && s[j])
			new_arr[i][k++] = s[j++];
		new_arr[i][k] = '\0';
		i++;
	}
	new_arr[i] = 0;
	return (new_arr);
}

char	**ft_split(char const *s, char c)
{
	int		size_arr;
	char	**new_arr;

	if (!s)
		return (NULL);
	size_arr = count_size(s, c);
	new_arr = (char **)malloc(sizeof(char *) * (size_arr + 1));
	if (!new_arr)
		return (NULL);
	return (remplire(new_arr, s, c, size_arr));
}
/*
int main()
{
	char *s = "";
	int	i = 0;

	char **str = ft_split("--1-2--3---4----5-----42",'-');
	while(i < 9)
	{
		printf("%s\n", str[i]);
		i++;
	}
    	
    //printf("%s\n", str[2]);
	//printf("%d \n", strlen_1(str));

	return 0;
}*/

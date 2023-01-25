/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <yhmada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:31:49 by yhmada            #+#    #+#             */
/*   Updated: 2021/12/04 18:25:04 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_searchr(const char *str, int c, size_t nomber)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] && nomber > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i++;
		nomber--;
	}
	return (NULL);
}

int	check(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	while (needle[j] && haystack[i])
	{	
		while (needle[j] == haystack[i] && needle[j] && haystack[i])
		{
			j++;
			i++;
		}
		if (len == j)
			return (i);
		if (j == 0)
			i++;
		if (haystack[i] == needle[j - 1] && j != 0)
			j--;
		else
			j = 0;
	}
	return (i);
}

char	*ft_strnstr(const char *haystak, const char *needle, size_t nomber)
{
	unsigned int	len_find;
	unsigned int	len_haystack;
	unsigned int	size;
	char			*str;
	char			*to_find;

	str = (char *)haystak;
	to_find = (char *)needle;
	len_find = ft_strlen(to_find);
	len_haystack = ft_strlen(haystak);
	if (len_find > len_haystack)
		return (NULL);
	else if (len_find == 0 || str == to_find)
		return (str);
	else if (len_find == 1)
		return (ft_searchr(str, to_find[0], nomber));
	size = check(str, to_find);
	if (size == 0)
		return (0);
	else if (nomber < size)
		return (NULL);
	return (str + (size - len_find));
}

/*
int main() {
	char * big = "1234569789";
	char * little = "9";
	size_t max = 8;
	//char *s1 = strnstr(big, little, max);
	char *s2 = strnstr(big, little, -10);

	printf("%s \n",s2);
}*/

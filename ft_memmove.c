/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 02:52:42 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/27 13:35:17 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	int		i;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
	{
		while (len > 0)
		{
			dest[len -1] = source[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
/*
int main()
{
    char str[] = "helo world !";
    printf("%s \n",ft_memmove(str + 3 ,str,5));
    printf("%s \n",str);
    return 0;
}
*/

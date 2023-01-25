/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 06:24:15 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/27 10:04:05 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_size(long number)
{
	int	size;

	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		number = -number;
		size++;
	}
	while (number > 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int number)
{
	int			size;
	char		*str;
	long		n;

	n = number;
	size = ft_size(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str[size] = 0;
	while (n > 0)
	{
		str[size - 1] = (n % 10) + 48 ;
		n /= 10;
		size--;
	}
	return (str);
}
/*
int main()
{
	printf("%s \n",ft_itoa(0));
	return 0;
}
*/

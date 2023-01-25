/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 06:45:49 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/14 06:50:02 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int i, int fd)
{
	long long	n;
	long long	nomber;

	nomber = i;
	n = 0;
	if (i < 0)
	{
		write(fd, "-", 1);
		nomber *= -1;
	}
	if (nomber < 10)
	{
		n = nomber + 48;
		write(fd, &n, 1);
	}
	else
	{
		n = nomber / 10;
		ft_putnbr_fd(n, fd);
		n = nomber % 10 + 48;
		write(fd, &n, 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:09:36 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/28 17:56:58 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	nomber;

	i = 0;
	signe = 1;
	nomber = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nomber = nomber * 10 + str[i] - 48;
		i++;
	}
	return (nomber * signe);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhmada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:25:44 by yhmada            #+#    #+#             */
/*   Updated: 2021/11/14 03:16:24 by yhmada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -32);
	else
		return (c);
}

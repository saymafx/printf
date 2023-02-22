/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:40:41 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/23 17:43:01 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenunbr(unsigned int nb)
{
	int	i;
	
	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_putunbr(unsigned int nb)
{
	int	a;

	a = ft_lenunbr(nb);
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nb >= 10)
	{
		ft_putunbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
	return (a);
}
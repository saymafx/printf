/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:27:19 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/23 17:39:26 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lennbr(int nb)
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

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				a;

	a = ft_lennbr(nb);
	if (nb == -2147483648)
	{	
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
	return (a);
}

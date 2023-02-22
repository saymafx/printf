/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:39:07 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/25 15:26:31 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base_len(char *base)
{
	int	a;
	int	b;

	a = 0;
	while (base[a])
	{
		if (base[a] == '+' || base[a] == '-')
			return (0);
		if (ft_isspace(base[a]))
			return (0);
		b = a + 1;
		while (base[b])
			if (base[a] == base[b++])
				return (0);
		a++;
	}
	if (a < 2)
		return (0);
	return (a);
}

static void	ft_recursive(unsigned long nbr, char *base)
{
	int	size;
	int	a;

	a = 1;
	if (nbr < 16)
		a = 0;
	size = ft_strlen(base);
	if (nbr > 0)
	{
		ft_recursive(nbr / size, base);
		ft_putchar(base[nbr % size]);
	}	
}

int	count(unsigned long nbr)
{
	int	a;

	a = 0;
	if (nbr == 0)
		return (3);
	while (nbr)
	{
		nbr /= 16;
		a++;
	}
	return (a);
}

int	ft_putunbr_base(unsigned long nbr, char *base)
{
	int	size;
	int	a;

	size = ft_base_len(base);
	if (size)
	{
		if (nbr == 0)
		{
			ft_putchar(base[0]);
			return (1);
		}
		else
			ft_recursive(nbr, base);
	}
	a = count(nbr);
	return (a);
}

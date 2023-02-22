/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:40:12 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/25 14:47:06 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	a;

	a = (unsigned long) ptr;
	count = ft_putstr("0x");
	count += ft_putunbr_base(a, "0123456789abcdef");
	return (count);
}

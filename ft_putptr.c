/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:05:03 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 14:33:51 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define T "0123456789abcdef"

void	ft_puthexa(unsigned long int c, int *len)
{
	if (c >= 16)
	{
		ft_puthexa((c / 16), len);
		ft_putchar(T[c % 16], len);
	}
	else
		ft_putchar(T[c], len);
}

void	ft_putptr(unsigned long int c, int *len)
{
	write(1, "0x", 2);
	(*len) += 2;
	ft_puthexa(c, len);
}

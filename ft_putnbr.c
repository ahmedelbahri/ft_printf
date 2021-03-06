/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:13:04 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 10:40:15 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) = (*len) + 11;
	}
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		ft_putchar('-', len);
	}
	if (n < 10 && n >= 0)
	{
		ft_putchar(n + 48, len);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + 48, len);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:26:37 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 10:01:09 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + 48, len);
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10, len);
		ft_putchar(n % 10 + 48, len);
	}
}

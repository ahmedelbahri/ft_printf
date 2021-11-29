/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:57:58 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 11:28:34 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_lo(unsigned int c, int *len)
{
	char	*t;

	t = "0123456789abcdef";
	if (c >= 16)
	{
		ft_puthexa_lo((c / 16), len);
		ft_putchar(t[c % 16], len);
	}
	else
		ft_putchar(t[c], len);
}

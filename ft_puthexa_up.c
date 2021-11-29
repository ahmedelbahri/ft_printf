/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:57:54 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 10:39:52 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_up(unsigned int c, int *len)
{
	char	*t;

	t = "0123456789ABCDEF";
	if (c >= 16)
	{
		ft_puthexa_up((c / 16), len);
		ft_putchar(t[c % 16], len);
	}
	else
		ft_putchar(t[c], len);
}

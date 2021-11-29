/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:44:56 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 15:54:07 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_redirect(const char *format, va_list	argcount, int *len, int i)
{
	if (format[i + 1] == 'c')
		ft_putchar(va_arg(argcount, int), len);
	if (format[i + 1] == 's')
		ft_putstr(va_arg(argcount, char *), len);
	if (format[i + 1] == 'p')
		ft_putptr(va_arg(argcount, unsigned long int), len);
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_putnbr(va_arg(argcount, int), len);
	if (format[i + 1] == 'u')
		ft_putnbr_unsigned(va_arg(argcount, unsigned int), len);
	if (format[i + 1] == 'x')
		ft_puthexa_lo(va_arg(argcount, int), len);
	if (format[i + 1] == 'X')
		ft_puthexa_up(va_arg(argcount, int), len);
	if (format[i + 1] == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	argcount;

	i = 0;
	len = 0;
	va_start(argcount, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_redirect(format, argcount, &len, i);
			i += 2;
		}
		else
		{
			ft_putchar(format[i], &len);
			i++;
		}
	}
	va_end(argcount);
	return (len);
}

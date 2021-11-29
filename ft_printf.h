/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:21:53 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/11/29 14:30:57 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void	ft_puthexa_up(unsigned int c, int *len);
void	ft_puthexa_lo(unsigned int c, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
size_t	ft_strlen(const char *s);
void	ft_putptr(unsigned long int c, int *len);

#endif
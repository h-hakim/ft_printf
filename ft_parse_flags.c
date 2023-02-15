/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:13:15 by hhakim            #+#    #+#             */
/*   Updated: 2022/12/18 23:39:31 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//this function is for parsing the mandatory flag types, void return
void	ft_parse_flags(va_list args, const char *s, int *ptr)
{
	s++;
	if (*s == 'c')
		*ptr += ft_putchar(va_arg(args, int));
	else if (*s == 's')
		*ptr += ft_putstr(va_arg(args, const char *));
	else if (*s == 'd' || *s == 'i')
		*ptr += ft_putnbr(va_arg(args, int));
	else if (*s == 'u')
		*ptr += ft_putnbr(va_arg(args, unsigned int));
	else if (*s == 'x' || *s == 'X')
		ft_puthex(va_arg(args, unsigned int), s, ptr);
	else if (*s == 'p')
		ft_putptr(va_arg(args, unsigned long long), ptr);
	else if (*s == '%')
		*ptr += ft_putchar('%');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:43:58 by hhakim            #+#    #+#             */
/*   Updated: 2022/12/18 23:35:12 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//include va_list args lib, unistd lib for the write function
//stdlib for malloc.
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define LOWR_HEX "0123456789abcdef"
# define UPR_HEX "0123456789ABCDEF"

void	ft_parse_flags(va_list args, const char *s, int *ptr);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_putnbr(long int nbr);
void		ft_puthex(unsigned int nbr, const char *format, int *ptr);
void		ft_putptr(unsigned long long ptr, int *count);

#endif
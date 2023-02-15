/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pntrhexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:51:55 by hhakim            #+#    #+#             */
/*   Updated: 2022/12/18 23:38:59 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//converts nbr to hexa_base_str and print return the len of str as an int
//uses constants defined in the header
void	ft_puthex(unsigned int nbr, const char *format, int *ptr)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, format, ptr);
		ft_puthex(nbr % 16, format, ptr);
	}
	else
	{
		if (*format == 'x')
			*ptr += write(1, &LOWR_HEX[nbr], 1);
		if (*format == 'X')
			*ptr += write(1, &UPR_HEX[nbr], 1);
	}
}

//convrts ptr no into LOWR HEX returns void.
static void	ft_convert_ptr(uintptr_t n, int *count)
{
	if (n >= 16)
	{
		ft_convert_ptr(n / 16, count);
		ft_convert_ptr(n % 16, count);
	}
	else
		*count += write(1, &LOWR_HEX[n], 1);
}

//the uintptr is unsigned int ptr capableof storing  data ptr.
//the function print the hexa equalvenet of the input, 
//and retruns the len of str printed.
void	ft_putptr(unsigned long long ptr, int *count)
{
	*count += write (1, "0x", 2);
	if (ptr == ((int)0))
		*count += (int)write (1, "0", 1);
	else
		ft_convert_ptr(ptr, count);
}

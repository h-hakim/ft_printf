/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:08:53 by hhakim            #+#    #+#             */
/*   Updated: 2022/12/18 23:22:30 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

//this funrcion prints char c, and returns 1
int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

//this function prints a string, and returns the length of it.
//uses ft_strlen from libft
int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		i += ft_putchar(*s);
		s ++;
	}
	return (i);
}

//returns the length of the nbr(unsigned) string tb created (no of digits)
static int	ft_ustrn_ln(long int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len ++;
		nbr = nbr / 10;
	}
	return (len);
}

//this function is a replication of itoa for unsigned long
//returns a str to the converted nbrf
static char	*ft_uitoa(long int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_ustrn_ln(n);
	nb = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

//this function converts nbr-given as an int(d, i, u)-to str, then prints str
//it returns the length of str. Uses ft_itoa from libft.
int	ft_putnbr(long int nbr)
{
	char	*str;
	int		i;

	if (nbr <= 0)
	{
		str = (char *)ft_itoa(nbr);
		i = ft_putstr(str);
		free(str);
		return (i);
	}
	str = (char *)ft_uitoa(nbr);
	i = ft_putstr(str);
	free(str);
	return (i);
}

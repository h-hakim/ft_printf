/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:23:45 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 20:28:23 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//inputs pointer to char returns index int beyond spaces
static int	ft_mvspace(const char *s)
{
	int	i;

	i = 0;
	while ((s[i] == ' ') || ((s[i] >= '\t') && (s[i] <= '\r')))
	{
		i ++;
	}
	return (i);
}

/*inputs const char pointer returns integer with ± option 
(± can be one time only)*/
int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	i = ft_mvspace(s);
	res = 0;
	if (!s)
		return (0);
	if (s[i] == '-' || s[i] == '+')
	{	
		if (s[i] == '-')
			sign = -1;
		i ++;
	}
	while (ft_isdigit(s[i]) && (s[i]))
	{
		res = res * 10 + (s[i] - '0');
		i ++;
	}
	return (res * sign);
}

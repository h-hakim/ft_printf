/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:37:21 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 19:20:49 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares first n chars for two strings
// return the differnce in first unequal char as int
int	ft_memcmp(void *s, void *t, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)s;
	s2 = (unsigned char *)t;
	while (n)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1 ++;
		s2 ++;
		n --;
	}
	return (0);
}

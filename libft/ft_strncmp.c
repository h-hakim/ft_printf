/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:58 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 20:31:16 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares first n chars for two strings
//returns the differnce in first unequal char as int
//can't handle overlapping strings unlike memmove
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*t;

	i = 0;
	s = (unsigned char *)s1;
	t = (unsigned char *)s2;
	while (s[i] && t[i] && i < n)
	{
		if (s[i] != t[i])
			return ((int)(s[i] - t[i]));
		i++;
	}
	if (i < n)
		return ((int)(s[i] - t[i]));
	return (0);
}

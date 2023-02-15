/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:18:38 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 19:50:46 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// takes *string and char (as an int) returns ptr to the string
// where it finds the char.
char	*ft_strchr(const char *s, int c)
{
	char	f;

	f = (char) c;
	while (*s)
	{
		if (*s == f)
			return ((char *) s);
		s++;
	}
	if (!f)
		return ((char *)s);
	return (NULL);
}

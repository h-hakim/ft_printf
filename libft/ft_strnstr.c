/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:50:29 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/16 16:12:03 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// scan hay at needle returns (1) if it reaches \0, -1 otherwise. To detect
//similar non-terminated neds in hay.
static int	ft_scanneedle(const char *hay, const char *ned, size_t l)
{
	while ((*hay == *ned) && (*ned) && (l))
	{
		hay ++;
		ned ++;
		l --;
	}
	if (!*ned)
		return (1);
	else
		return (-1);
}

//finds the needle and returns a pointer to hay where it was found.
char	*ft_strnstr(const char *hay, const char *ned, size_t l)
{
	int	z;

	z = 0;
	if (!*ned)
		return ((char *)hay);
	while ((*hay) && (l))
	{
		if (*hay == *ned)
			z = ft_scanneedle(hay, ned, l);
		if (z > 0)
			return ((char *) hay);
		hay ++;
		l --;
	}
	return (NULL);
}

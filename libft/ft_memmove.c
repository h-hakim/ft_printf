/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:59:02 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 20:29:01 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies n chars from src to dest -without terminating- returns ptr to dest.
// could handle overlaps unlike memcpy, and strlcpy.
//checks if src>= dst, it copies -> forewrad othweriswe <-.
void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (src >= dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dest);
	}
	while (--n + 1)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}

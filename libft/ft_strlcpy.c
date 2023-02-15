/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:50:21 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 19:27:47 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies up to dstsize - 1 characters from the string src to dst,
// NUL-terminating the result if dstsize > 0, returns size_t src length.
size_t	ft_strlcpy(char *dst, char *src, size_t dsize)
{
	size_t	i;

	if (dsize)
	{
		i = 0;
		while ((src[i]) && (i < (dsize - 1)))
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

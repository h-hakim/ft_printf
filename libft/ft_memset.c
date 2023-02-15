/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:57:21 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 19:33:29 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies char c (taken as int) l times in array s.
void	*ft_memset(void *s, int c, size_t l)
{
	int	i;

	i = -1;
	while (++i < (int)l)
		((unsigned char *)s)[i] = (unsigned char )c ;
	return (s);
}

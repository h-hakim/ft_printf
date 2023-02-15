/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:28:41 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/21 12:57:39 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*allocates memory of size s, n times, & fill it with zeros*/
void	*ft_calloc(size_t n, size_t s)
{
	void	*ptr;

	ptr = (char *)malloc(s * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * s);
	return (ptr);
	return (NULL);
}

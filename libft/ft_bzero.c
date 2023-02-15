/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:04:18 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 20:28:26 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*inputs pointer to char and size_t n, returns void
the fn fill string with zeros ntimes*/
void	ft_bzero(void *s, size_t n)
{
	int	i;

	if (n == 0)
		return ;
	i = -1;
	while (++i < (int)n)
		((unsigned char *)s)[i] = 0;
}

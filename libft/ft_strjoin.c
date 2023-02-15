/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:20:57 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/16 13:41:53 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//joins s1 and s2 into new string and terminates, 
// return a ptr to the new string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	size_t			ls1;
	size_t			ls2;

	if (!s1 && !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen (s2);
	res = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!res)
		return (NULL);
	res = (char *)ft_memcpy(res, s1, ls1);
	res = (char *)ft_memcpy((res + ls1), s2, ls2);
	res -= ls1;
	res[ls1 + ls2] = '\0';
	return (res);
}

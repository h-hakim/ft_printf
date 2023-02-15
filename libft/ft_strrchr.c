/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:16:05 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 20:32:22 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//returns a pointer to s on the last occurrenc of char c, unlike strchr
//  NUll othwerwise
char	*ft_strrchr(const char *s, int c)
{
	char	f;
	int		i;

	f = (char) c;
	i = ft_strlen(s);
	if (!f && !s[i])
		return ((char *)s + i);
	while (i-- > 0)
		if (s[i] == f)
			return ((char *) s + i);
	return (NULL);
}

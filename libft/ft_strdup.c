/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:51:39 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/15 21:32:03 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//takes a string *s copies it to a new string,return a ptr to a new s.
char	*ft_strdup(const char *s)
{
	char	*r;
	int		i;

	r = (char *)malloc(ft_strlen(s)+ 1);
	if (!r)
		return (NULL);
	i = -1;
	while (i++, s[i])
		r[i] = s[i];
	r[i] = 0;
	return (r);
}

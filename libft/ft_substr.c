/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:38:06 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/21 15:54:24 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//allocates memory and create substring strting at index st for length l;
char	*ft_substr(char const *s, unsigned int strt, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	if (strt > ft_strlen(s) - 1)
		len = 0;
	else if (ft_strlen(&s[strt]) <= len)
		len = ft_strlen(&s[strt]);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[strt + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

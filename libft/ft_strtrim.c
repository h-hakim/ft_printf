/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:53:36 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/17 21:45:36 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//scan set and returns 1 if it find any identical c in set 0 otherwise
static int	ft_scanset(char c, char const *set )
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

//allocates memory and fill the new string with trimmed data
static char	*ft_filltrimmed(size_t i, size_t j, char const *s1 )
{
	size_t	z;
	size_t	ind;
	char	*res;

	z = j - i;
	ind = 0;
	res = (char *)malloc(sizeof(*s1) * (j - i + 1));
	if (!res)
		return (NULL);
	while (i < j)
	{
		res[ind] = (char)s1[i];
		i ++;
		ind++;
	}
	res[ind] = 0;
	return (res);
}

//trims set of chars from begining and end of s1,
// returns a new trimmed copy of s1.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] && ft_scanset(s1[i], set))
			i ++;
	while (ft_scanset(s1[j - 1], set) && j > i)
			j --;
	res = ft_filltrimmed(i, j, s1);
	return (res);
}

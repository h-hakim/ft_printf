/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:00:26 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/21 11:53:32 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//takes a string *s copies word from s(start to end) to a new string,
// return a ptr to a new s and terminates.
static char	*ft_strwrdcpy(const char *s, size_t strt, size_t end)
{
	char	*r;
	int		i;

	i = 0;
	r = (char *)malloc(sizeof(*s) * ((end - strt) + 1));
	if (!r)
		return (NULL);
	while (strt < end)
	{
		r[i] = (char)s[strt];
		strt ++;
		i ++;
	}
	r[i] = '\0';
	return (r);
}

//scan for the total number of strings (ptrs) to be formed. 
static size_t	ft_counter(const char *s, char c)
{
	size_t	counter;
	int		i;
	int		ctrl;

	counter = 0;
	ctrl = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && (ctrl == 0))
		{
			counter ++;
			ctrl = 1;
		}	
		if (s[i] == c)
			ctrl = 0;
		i++;
	}
	return (counter);
}

//free alloctaed memory 
static int	ft_freemem(char **res, size_t n, int indx)
{
	indx = -1;
	if (!res)
	{
		if (n > 0)
		{
			while (n)
			{
				free(res[n]);
				n --;
			}
		}
		free (res[0]);
		return (indx);
	}
	return (indx);
}

//split a string to strings at delimiter char c. 
// Returns a ptr to ptr to the two split strings (array of arrays).
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		indx;
	char	**res;

	res = malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	indx = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && indx < 0)
			indx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && indx >= 0)
		{
			res[j++] = (char *)ft_strwrdcpy(s, indx, i);
			indx = ft_freemem(res, j, indx);
		}
		i ++;
	}
	res[j] = 0;
	return (res);
}

// int main(void)
// {
// 	int i ;
// 	char **str;

// 	i = 0;
// 	str = ft_split("   sdf sdgfdf b", ' ');
// 	while (str[i])
// 	{
// 		printf("The string is : %s\n", str[i]);
// 		i++;
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:33:29 by hhakim            #+#    #+#             */
/*   Updated: 2022/12/19 02:38:27 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			ft_parse_flags(args, format, &len);
			format ++;
		}
		else
		{
			write(1, format, 1);
			len ++;
		}
	format ++;
	}
	va_end(args);
	return (len);
}

/*
#include <stdio.h>
int main(void)
{
	ft_printf("This is a test\n");
	printf("This is a test\n");
	ft_printf("");
	printf("");

	ft_printf("an integer mine %d \n", 120);
	printf("an integer %d \n", 120);

	ft_printf("an integer mine %i \n", 13);
	printf("an integer %i \n", 13);

	ft_printf("an integer mine %u \n", 13);
	printf("an integer %u \n", 13);
	ft_printf("a string  mine %s \n", " mine");
	printf("a string  %s \n", "original");

	ft_printf("an empty string mine %s \n", "");
	printf("aan empty string orginal  %s ]n", "");
	ft_printf("hexa x mine %x \n", 120);
	printf("hexa x  %x \n", 120);

	ft_printf("hexa x mine %x \n", 00);
	printf("hexa x  %x \n", 00);

	ft_printf("hexa x mine %X \n", 120);
	printf("hexa x  %X \n", 120);

	ft_printf("hexa x mine %X \n", 00);
	printf("hexa x  %X \n", 00);

	return 0; 
}
TEST NO 2 ###################################
int main(void)
{
	// ft_printf("%% %");
	int ret1;
	int ret2;
	char c,d,e;
	 c = '1', d = 'T', e = 'F';
	ret1 = ft_printf("%c\n", c);
	ret2 = printf("%c\n", e);

	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	char str1[] = "This is the first format specifier#&.';?/!\n";
	ret1 = ft_printf("%s", str1);
	ret2 = printf("%s", str1);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	int i = -2147483648;
	int j = 2147483647;
	int l = 0;
	int	*ptr1;
	int	*ptr2;
	int	*ptr3;
	int	*ptr4;
	ptr1 = &i;
	ptr2 = &j;
	ptr3 = &l;
	ptr4 = NULL;
	ret1 = ft_printf("%p\n%p\n%p\n%p\n", ptr1, ptr2, ptr3, ptr4);
	ret2 = printf("%p\n%p\n%p\n%p\n", ptr1, ptr2, ptr3, ptr4);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	i = -2147483648;
	j = 2147483647;
	l = 0;
	ret1 = ft_printf("%d\n%d\n%d\n", i, j, l);
	ret2 = printf("%d\n%d\n%d\n", i, j, l);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	ret1 = ft_printf("%i\n%i\n%i\n", i, j, l);
	ret2 = printf("%i\n%i\n%i\n", i, j, l);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	unsigned int k;
	i = -2147483648;
	j = 0;
	k = 4294967295;
	ret1 = ft_printf("%u\n%u\n%u\n", i, j, k);
	ret2 = printf("%u\n%u\n%u\n", i, j, k);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	i = -2147483648;
	j = 0;
	k = 42949627;
	ret1 = ft_printf("%x\n%x\n%x\n", i, j, k);
	ret2 = printf("%x\n%x\n%x\n", i, j, k);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	ret1 = ft_printf("%X\n%X\n%X\n", i, j, k);
	ret2 = printf("%X\n%X\n%X\n", i, j, k);
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n", ret2);
	ret1 = ft_printf("%% %%%% %%\n");
	ret2 = printf("%% %%%% %%\n");
	printf("Here the return of ft_printf: 	%d\n", ret1);
	printf("Here the return of printf: 	%d\n\n\n", ret2);
	printf("CHECKING FOR LEAKS:\n\n");
	system("leaks a.out");
	return (0);
}
*/

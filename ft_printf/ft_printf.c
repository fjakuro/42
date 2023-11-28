/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:20:38 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/28 19:26:01 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_specifier(char spec, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		tmp;

	count = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '\%')
		{
			tmp = process_specifier(format[++i], args);
			if (tmp == -1)
				return (-1);
			count += tmp;
		}
		else
		{
			if (write(1, &format[i], 1) == -1)
				return (-1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	process_specifier(char spec, va_list args)
{
	// char	c;
	int		count;

	count = 0;
	if (spec == 'c')
		count = printf_c(args);
	if (spec == 's')
		count = printf_s(args);
	// if (spec == 'p')
	// 	count = printf_p(args);
	if (spec == '%')
		count = printf_percent();
	return (count);
}

#include <stdio.h>
#include <stddef.h>
int	main()
{
	// printf("%d\n", printf("%p", NULL));
	ft_printf("abc%cd\n", 'A');
	ft_printf("abc%s%%d\n", "ABC");
	printf("%lu\n", sizeof(long));
	printf("%p\n", NULL);
	return (0);
}
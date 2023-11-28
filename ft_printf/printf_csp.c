/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_csp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:09:26 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/28 19:26:25 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include <string.h>

int	printf_c(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	printf_s(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	// len = ft_strlen(str);
	len = strlen(str);
	// if (write(1, &str, strlen(str)))
	if (write(1, str, strlen(str)) == -1)
		return (-1);
	return (len);
}

int printf_p(va_list args)
{
	long 	p;
	int		len;

	len = 0;
	p = va_arg(args, long);
	return (len);
}

int	printf_percent(void)
{
	if (write(1, "\%", 1) == -1)
		return (-1);
	return (1);
}
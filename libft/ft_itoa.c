/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:55:19 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 16:30:44 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitof(int n);
static char	*convert_rec(int n, char *str);
static char	*charcat(char *dest, char src);

char	*ft_itoa(int n)
{
	char	*str;

	if (n >= 0)
		str = (char *)malloc(sizeof(char) * (digitof(n) + 1));
	else
		str = (char *)malloc(sizeof(char) * (digitof(n) + 2));
	if (!str)
		return (NULL);
	str[0] = '\0';
	str = convert_rec(n, str);
	return (str);
}

static int	digitof(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*convert_rec(int n, char *str)
{
	int		div;

	if (n == -2147483648)
	{
		convert_rec(n / 10, str);
		return (charcat(str, n % 10 * -1 + '0'));
	}
	if (n < 0)
	{
		charcat(str, '-');
		n *= -1;
	}
	div = n / 10;
	if (div != 0)
		convert_rec(div, str);
	return (charcat(str, n % 10 + '0'));
}

static char	*charcat(char *dest, char src)
{
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	dest[dest_len] = src;
	dest[dest_len + 1] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		n0 = 1234567890;
// 	char	*str0 = ft_itoa(n0);
// 	printf("%s\n", str0);
// 	free(str0);

// 	int		n1 = -1234567890;
// 	char	*str1 = ft_itoa(n1);
// 	printf("%s\n", str1);
// 	free(str1);

// 	int		n2 = -2147483648;
// 	char	*str2 = ft_itoa(n2);
// 	printf("%s\n", str2);
// 	free(str2);

// 	int		n3 = 0;
// 	char	*str3 = ft_itoa(n3);
// 	printf("%s\n", str3);
// 	free(str3);
// }

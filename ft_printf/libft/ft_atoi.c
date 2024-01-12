/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:36:45 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/25 11:11:44 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static int	ft_atoi2(const char *str, int sign, int head);

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (ft_atoi2(str, sign, i));
}

static int	ft_atoi2(const char *str, int sign, int head)
{
	int		i;
	long	result;

	result = 0;
	i = head;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == 1 && (result > LONG_MAX / 10
				|| result * 10 > LONG_MAX - (str[i] - '0')))
			return ((int)LONG_MAX);
		else if (sign == -1 && (result * -1 < LONG_MIN / 10
				|| result * 10 * -1 < LONG_MIN + (str[i] - '0')))
			return ((int)LONG_MIN);
		else
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * result));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", atoi("  -012345  +--"));
// 	printf("%d\n", ft_atoi("  -012345  +--"));

// 	printf("%d\n", atoi("  +012:345"));
// 	printf("%d\n", ft_atoi("  +012:345"));

// 	printf("%d\n", atoi("1000000000000000000"));
// 	printf("%d\n", ft_atoi("1000000000000000000"));

// 	printf("%d\n", atoi("9223372036854775807"));
// 	printf("%d\n", ft_atoi("9223372036854775807"));

// 	printf("%d\n", atoi("-9223372036854775809"));
// 	printf("%d\n", ft_atoi("-9223372036854775809"));

// 	printf("%d\n", (int)LONG_MIN);
// }

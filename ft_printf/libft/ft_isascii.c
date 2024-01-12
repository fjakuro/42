/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:26:25 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 00:26:25 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isascii('\n'));
// 	printf("%d\n", ft_isascii('\n'));

// 	printf("%d\n", isascii('a'));
// 	printf("%d\n", ft_isascii('a'));

// 	printf("%d\n", isascii(0));
// 	printf("%d\n", ft_isascii(0));

// 	printf("%d\n", isascii(300));
// 	printf("%d\n", ft_isascii(300));

// 	printf("%d\n", isascii(-1));
// 	printf("%d\n", ft_isascii(-1));
// }

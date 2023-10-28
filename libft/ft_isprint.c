/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:27:44 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 17:27:44 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isprint('\n'));
// 	printf("%d\n", ft_isprint('\n'));

// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", ft_isprint('a'));

// 	printf("%d\n", isprint(';'));
// 	printf("%d\n", ft_isprint(';'));

// 	printf("%d\n", isprint(0));
// 	printf("%d\n", ft_isprint(0));

// 	printf("%d\n", isprint(300));
// 	printf("%d\n", ft_isprint(300));

// 	printf("%d\n", isprint(-1));
// 	printf("%d\n", ft_isprint(-1));
// }

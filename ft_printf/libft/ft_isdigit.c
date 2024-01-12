/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:17:17 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 00:17:17 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isdigit('0'));
// 	printf("%d\n", ft_isdigit('0'));

// 	printf("%d\n", isdigit('a'));
//  	printf("%d\n", ft_isdigit('a'));

// 	printf("%d\n", isdigit(0));
//  	printf("%d\n", ft_isdigit(0));

// 	printf("%d\n", isdigit(300));
//  	printf("%d\n", ft_isdigit(300));

// 	printf("%d\n", isdigit(-1));
//  	printf("%d\n", ft_isdigit(-1));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:21:45 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 00:21:45 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", isalnum('0'));
//     printf("%d\n", ft_isalnum('0'));

// 	printf("%d\n", isalnum('a'));
//     printf("%d\n", ft_isalnum('a'));

// 	printf("%d\n", isalnum(':'));
//     printf("%d\n", ft_isalnum(':'));

// 	printf("%d\n", isalnum(0));
//     printf("%d\n", ft_isalnum(0));

// 	printf("%d\n", isalnum(300));
//     printf("%d\n", ft_isalnum(300));

// 	printf("%d\n", isalnum(-1));
//     printf("%d\n", ft_isalnum(-1));
// }

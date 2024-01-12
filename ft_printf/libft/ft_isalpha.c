/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:42:55 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/21 23:42:55 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", ft_isalpha('a'));

// 	printf("%d\n", isalpha('B'));
// 	printf("%d\n", ft_isalpha('B'));

// 	printf("%d\n", isalpha('1'));
// 	printf("%d\n", ft_isalpha('1'));

// 	printf("%d\n", isalpha(0));
// 	printf("%d\n", ft_isalpha(0));

// 	printf("%d\n", isalpha(300));
// 	printf("%d\n", ft_isalpha(300));

// 	printf("%d\n", isalpha(-1));
// 	printf("%d\n", ft_isalpha(-1));
// }

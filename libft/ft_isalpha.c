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
		return (c);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", ft_isalpha('a'));

// 	printf("%d\n", isalpha('b'));
// 	printf("%d\n", ft_isalpha('b'));

// 	printf("%d\n", isalpha('1'));
// 	printf("%d\n", ft_isalpha('1'));
// }

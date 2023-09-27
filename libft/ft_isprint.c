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
		return (c);
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

// 	printf("%d\n", isprint(200));
// 	printf("%d\n", ft_isprint(200));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:57:32 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/25 13:07:46 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	s[] = "abCD01 +:";
// 	for (int i = 0; i < (int)sizeof(s); i++)
// 		printf("%c", toupper(s[i]));
// 	printf("\n");
// 		for (int i = 0; i < (int)sizeof(s); i++)
// 		printf("%c", ft_toupper(s[i]));
// 	printf("\n");
// }

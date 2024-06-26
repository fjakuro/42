/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:06:20 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/03 19:04:43 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	s[] = "abCD01 +:";
// 	for (int i = 0; i < (int)sizeof(s); i++)
// 		printf("%c", tolower(s[i]));
// 	printf("\n");
// 		for (int i = 0; i < (int)sizeof(s); i++)
// 		printf("%c", ft_tolower(s[i]));
// 	printf("\n");

// 	printf("%c\n", tolower(300));
// 	printf("%c\n", ft_tolower(300));

// 	printf("%c\n", tolower(-1));
// 	printf("%c\n", ft_tolower(-1));
// }

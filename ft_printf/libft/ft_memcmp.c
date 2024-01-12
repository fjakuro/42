/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:57:26 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/03 20:35:49 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((int)(str1[i] - str2[i]));
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdef";
// 	char	str1[] = "abcDEF";
// 	char	str2[] = "abc";
// 	char	str3[] = "";
// 	char	str4[] = "abcdef";

// 	printf("%d\n", memcmp(str0, str4, 7));
// 	printf("%d\n", ft_memcmp(str0, str4, 7));

// 	printf("%d\n", memcmp(str0, str1, 6));
// 	printf("%d\n", ft_memcmp(str0, str1, 6));

// 	printf("%d\n", memcmp(str1, str0, 6));
// 	printf("%d\n", ft_memcmp(str1, str0, 6));

// 	printf("%d\n", memcmp(str0, str2, 6));
// 	printf("%d\n", ft_memcmp(str0, str2, 6));

// 	printf("%d\n", memcmp(str0, str3, 6));
// 	printf("%d\n", ft_memcmp(str0, str3, 6));

// 	printf("%d\n", memcmp(str0, str3, 0));
// 	printf("%d\n", ft_memcmp(str0, str3, 0));

// 	// printf("%d\n", memcmp(str0, NULL, 2));
// 	// printf("%d\n", ft_memcmp(str0, NULL, 2));

// 	// printf("%d\n", memcmp(NULL, NULL, 0));
// 	// printf("%d\n", ft_memcmp(NULL, NULL, 0));
// }

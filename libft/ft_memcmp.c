/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:57:26 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/25 14:04:49 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdef";
// 	char	str1[] = "abcDEF";
// 	char	str2[] = "abc";
// 	char	str3[] = "";

// 	printf("%d\n", memcmp(str0, str1, 6));
// 	printf("%d\n", ft_memcmp(str0, str1, 6));

// 	printf("%d\n", memcmp(str0, str2, 6));
// 	printf("%d\n", ft_memcmp(str0, str2, 6));

// 	printf("%d\n", memcmp(str0, str3, 6));
// 	printf("%d\n", ft_memcmp(str0, str3, 6));
// }

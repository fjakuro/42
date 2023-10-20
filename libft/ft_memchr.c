/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:45:13 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/13 00:38:17 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdefabcdef";
// 	printf("%p, %s\n", memchr(str0, 'e', 20), (char *)memchr(str0, 'e', 20));
// 	printf("%p, %s\n", ft_memchr(str0, 'e', 20), (char *)ft_memchr(str0, 'e', 20));

// 	printf("%p, %s\n", memchr(str0, 'e', 3), (unsigned char *)memchr(str0, 'e', 3));
// 	printf("%p, %s\n", ft_memchr(str0, 'e', 3), (unsigned char *)ft_memchr(str0, 'e', 3));

// 	printf("%p, %s\n", memchr(str0, '\0', 20), (unsigned char *)memchr(str0, '\0', 20));
// 	printf("%p, %s\n", ft_memchr(str0, '\0', 20), (unsigned char *)ft_memchr(str0, '\0', 20));

// 	char	test[] = {0, 1, 2, 3, 4, 5};
// 	printf("%p\n", memchr(test, 0, 0));
// 	printf("%p\n", ft_memchr(test, 0, 0));

// 	printf("%p\n", memchr(test, 2, 3));
// 	printf("%p\n", ft_memchr(test, 2, 3));

// 	printf("%p\n", memchr(test, 2 + 256, 3));
// 	printf("%p\n", ft_memchr(test, 2 + 256, 3));

// 	char	*test_null = NULL;
// 	// printf("%p\n", memchr(test_null, 2 + 256, 3));
// 	printf("%p\n", ft_memchr(test_null, 2 + 256, 3));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:45:13 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/25 13:56:54 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((void *)&str[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdefabcdef";
// 	printf("%p\n", memchr(str0, 'e', 20));
// 	printf("%p\n", ft_memchr(str0, 'e', 20));

// 	printf("%p\n", memchr(str0, 'e', 3));
// 	printf("%p\n", ft_memchr(str0, 'e', 3));

// 	printf("%p\n", memchr(str0, '\0', 20));
// 	printf("%p\n", ft_memchr(str0, '\0', 20));
// }

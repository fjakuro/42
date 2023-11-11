/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:27:54 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/03 21:10:53 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	s0[] = "abcdef";
// 	char	s1[] = "abcDEF";
// 	char	s2[] = "abc";
// 	char	s3[] = "";
// 	char	s4[] = "\300";
// 	char	s5[] = "\0a";
// 	char	s6[] = "\0\0";

// 	printf("%d\n", strncmp(s0, s1, 6));
// 	printf("%d\n", ft_strncmp(s0, s1, 6));

// 	printf("%d\n", strncmp(s0, s1, 3));
// 	printf("%d\n", ft_strncmp(s0, s1, 3));

// 	printf("%d\n", strncmp(s0, s2, 6));
// 	printf("%d\n", ft_strncmp(s0, s2, 6));

// 	printf("%d\n", strncmp(s0, s3, 6));
// 	printf("%d\n", ft_strncmp(s0, s3, 6));

// 	printf("%d\n", strncmp(s0, s3, 0));
// 	printf("%d\n", ft_strncmp(s0, s3, 0));

// 	printf("%d\n", strncmp(s0, s4, 1));
// 	printf("%d\n", ft_strncmp(s0, s4, 1));

// 	printf("%d\n", strncmp(s5, s6, 2));
// 	printf("%d\n", ft_strncmp(s5, s6, 2));
// }

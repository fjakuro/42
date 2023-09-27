/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:27:54 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 12:03:27 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	s0[] = "abcdef";
// 	char	s1[] = "abcDEF";
// 	char	s2[] = "abc";
// 	char	s3[] = "";

// 	printf("%d\n", strncmp(s0, s1, 6));
// 	printf("%d\n", ft_strncmp(s0, s1, 6));

// 	printf("%d\n", strncmp(s0, s2, 6));
// 	printf("%d\n", ft_strncmp(s0, s2, 6));

// 	printf("%d\n", strncmp(s0, s3, 6));
// 	printf("%d\n", ft_strncmp(s0, s3, 6));
// }

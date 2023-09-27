/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:39:58 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 18:39:58 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		if (d <= s)
			d[i] = s[i];
		else
			d[len - i - 1] = s[len - i - 1];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dst0[] = "abcdef";
// 	char	src0[] = "01234";
// 	memmove(dst0, src0, 5);
// 	printf("%s\n", dst0);
// 	char	dst0_ft[] = "abcdef";
// 	char	src0_ft[] = "01234";
// 	ft_memmove(dst0_ft, src0_ft, 5);
// 	printf("%s\n", dst0_ft);

// 	// char	dst1[] = "abcdef";
// 	// memmove(&dst1[2], dst1, 4);
// 	// printf("%s\n", dst1);
// 	char	dst1_ft[] = "abcdef";
// 	ft_memmove(&dst1_ft[2], dst1_ft, 4);
// 	printf("%s\n", dst1_ft);

// 	// char	*dst2 = "abcde";
// 	// char	*src2 = NULL;
// 	// memmove(dst2, src2, 5);
// 	// printf("%s\n", dst2);
// 	char	*dst2_ft = "abcde";
// 	char	*src2_ft = NULL;
// 	ft_memmove(dst2_ft, src2_ft, 5);
// 	printf("%s\n", dst2_ft);
// }

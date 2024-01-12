/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:23:44 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/18 15:55:38 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	if (dstsize)
		dstlen = ft_strlen(dst);
	else
		dstlen = 0;
	i = 0;
	while (dstlen + i + 1 < dstsize && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstsize)
		dst[dstlen + i] = '\0';
	if (dstlen < dstsize)
		return (dstlen + ft_strlen(src));
	else
		return (dstsize + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dst0[20] = "0123456789";
// 	char	dst0_ft[20] = "0123456789";
// 	char	src0[] = "abcdef";
// 	printf("%zu: %s\n", strlcat(dst0, src0, 20), dst0);
// 	printf("%zu: %s\n", ft_strlcat(dst0_ft, src0, 20), dst0_ft);

// 	char	dst1[13] = "0123456789";
// 	char	dst1_ft[13] = "0123456789";
// 	char	src1[] = "abcdef";
// 	printf("%zu: %s\n", strlcat(dst1, src1, 7), dst1);
// 	printf("%zu: %s\n", ft_strlcat(dst1_ft, src1, 7), dst1_ft);

// 	char	dst2[11] = "01234";
// 	char	dst2_ft[11] = "01234";
// 	char	src2[] = "abcdef";
// 	printf("%zu: %s\n", strlcat(dst2, src2, 0), dst2);
// 	printf("%zu: %s\n", ft_strlcat(dst2_ft, src2, 0), dst2_ft);

// 	char	*dst3 = NULL;
// 	char	*dst3_ft = NULL;
// 	char	src3[] = "abcdef";
// 	printf("%zu: %s\n", strlcat(dst3, src3, 0), dst3);
// 	printf("%zu: %s\n", ft_strlcat(dst3_ft, src3, 0), dst3_ft);

// 	char	dst4[20] = "0123456789";
// 	char	dst4_ft[20] = "0123456789";
// 	char	*src4 = "";
// 	printf("%zu: %s\n", strlcat(dst4, src4, 1), dst4);
// 	printf("%zu: %s\n", ft_strlcat(dst4_ft, src4, 1), dst4_ft);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:30:26 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/18 15:54:58 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dstsize && i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dst0[11] = "0123456789";
// 	char	dst0_ft[11] = "0123456789";
// 	char	src0[] = "abcdef";
// 	printf("%zu: %s\n", strlcpy(dst0, src0, 11), dst0);
// 	printf("%zu: %s\n", ft_strlcpy(dst0_ft, src0, 11), dst0_ft);

// 	char	dst1[11] = "0123";
// 	char	dst1_ft[11] = "0123";
// 	char	src1[] = "abcdef";
// 	printf("%zu: %s\n", strlcpy(dst1, src1, 5), dst1);
// 	printf("%zu: %s\n", ft_strlcpy(dst1_ft, src1, 5), dst1_ft);

// 	char	dst2[11] = "01234";
// 	char	dst2_ft[11] = "01234";
// 	char	src2[] = "abcdef";
// 	printf("%zu: %s\n", strlcpy(dst2, src2, 0), dst2);
// 	printf("%zu: %s\n", ft_strlcpy(dst2_ft, src2, 0), dst2_ft);

// 	char	*dst3 = NULL;
// 	char	*dst3_ft = NULL;
// 	char	src3[] = "abcdef";
// 	printf("%zu: %s\n", strlcpy(dst3, src3, 0), dst3);
// 	printf("%zu: %s\n", ft_strlcpy(dst3_ft, src3, 0), dst3_ft);

// 	char	dst4[11] = "";
// 	char	dst4_ft[11] = "";
// 	char	*src4 = "";
// 	printf("%zu: %s\n", strlcpy(dst4, src4, 1), dst4);
// 	printf("%zu: %s\n", ft_strlcpy(dst4_ft, src4, 1), dst4_ft);
// }

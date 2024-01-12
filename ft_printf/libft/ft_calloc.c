/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:20:05 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/18 17:36:07 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			alloc_size;

	if (count && size > SIZE_MAX / count)
		return (0);
	else
		alloc_size = count * size;
	p = (unsigned char *)malloc(alloc_size);
	if (!p)
		return (NULL);
	ft_bzero(p, alloc_size);
	return (p);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*str0;
// 	str0 = (int *)calloc(5, sizeof(int));
// 	for (int i = 0; i < 1; i++)
// 		printf("%p", &str0[i]);
// 	printf(": ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d", str0[i]);
// 	printf("\n");
// 	free(str0);
// 	int	*str0_ft;
// 	str0_ft = (int *)ft_calloc(5, sizeof(int));
// 	for (int i = 0; i < 1; i++)
// 		printf("%p", &str0_ft[i]);
// 	printf(": ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d", str0_ft[i]);
// 	printf("\n");
// 	free(str0_ft);

// 	int	*str1;
// 	str1 = (int *)calloc(0, 0);
// 	printf("%p", &str1[0]);
// 	printf(": ");
// 	printf("%d", str1[0]);
// 	printf("\n");
// 	free(str1);
// 	int	*str1_ft;
// 	str1_ft = (int *)ft_calloc(0, 0);
// 	printf("%p", &str1_ft[0]);
// 	printf(": ");
// 	printf("%d", str1_ft[0]);
// 	printf("\n");
// 	free(str1_ft);

// 	int	*str2;
// 	str2 = (int *)calloc(SIZE_MAX, 10);
// 	printf("%p\n", &str2[0]);
// 	free(str2);
// 	int	*str2_ft;
// 	str2_ft = (int *)ft_calloc(SIZE_MAX, 10);
// 	printf("%p\n", &str2_ft[0]);
// 	free(str2_ft);

// 	// system("leaks -q a.out");
// }

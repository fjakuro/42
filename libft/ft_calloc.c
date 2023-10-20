/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:20:05 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/14 22:04:54 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			alloc_size;

	if (count && size > SIZE_MAX / count)
		// return (NULL);
		alloc_size = SIZE_MAX;
	else
		alloc_size = count * size;
	p = (unsigned char *)malloc(alloc_size);
	if (!p)
		return (NULL);
	ft_bzero(p, alloc_size);
	return (p);
}

#include <stdio.h>
int	main(void)
{
	printf("%zu\n", SIZE_MAX);

	int	*str0;
	str0 = (int *)calloc(5, sizeof(int));
	for (int i = 0; i < 1; i++)
		printf("%p", &str0[i]);
	printf(": ");
	for (int i = 0; i < 5; i++)
		printf("%d", str0[i]);
	printf("\n");
	free(str0);
	int	*str0_ft;
	str0_ft = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 1; i++)
		printf("%p", &str0_ft[i]);
	printf(": ");
	for (int i = 0; i < 5; i++)
		printf("%d", str0_ft[i]);
	printf("\n");
	free(str0_ft);

	int	*str1;
	str1 = (int *)calloc(0, 0);
	for (int i = 0; i < 1; i++)
		printf("%p", &str1[i]);
	printf(": ");
	for (int i = 0; i < 1; i++)
		printf("%d", str1[i]);
	printf("\n");
	free(str1);
	int	*str1_ft;
	str1_ft = (int *)ft_calloc(0, 0);
	for (int i = 0; i < 1; i++)
		printf("%p", &str1_ft[i]);
	printf(": ");
	for (int i = 0; i < 1; i++)
		printf("%d", str1_ft[i]);
	printf("\n");
	free(str1_ft);

	int	*str2;
	str2 = (int *)calloc(INT_MAX, 10);
	for (int i = 0; i < 1; i++)
		printf("%p", &str2[i]);
	printf("\n");
	free(str2);
	int	*str2_ft;
	str2_ft = (int *)ft_calloc(INT_MAX, 10);
	for (int i = 0; i < 1; i++)
		printf("%p", &str2_ft[i]);
	printf("\n");
	free(str2_ft);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:19:35 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 17:19:35 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	str0[] = "abcdef";
// 	memset(str0, 'x', 5);
// 	printf("%s\n", str0);
// 	char	str0_ft[] = "abcdef";
// 	ft_memset(str0_ft, 'x', 5);
// 	printf("%s\n", str0_ft);

// 	char	str1[6] = "";
// 	memset(str1, 'x', 5);
// 	printf("%s\n", str1);
// 	char	str1_ft[6] = "";
// 	ft_memset(str1_ft, 'x', 5);
// 	printf("%s\n", str1_ft);

// 	char	intarr[] = {1, 2, 3, 4, 5};
// 	memset(intarr, 0, 3);
// 	for (int i = 0; i < 5; i++)
// 		printf("%d", intarr[i]);
// 	printf("\n");
// 	char	intarr_ft[] = {1, 2, 3, 4, 5};
// 	ft_memset(intarr_ft, 0, 3);
// 	for (int i = 0; i < 5; i++)
// 		printf("%d", intarr_ft[i]);
// 	printf("\n");
// }

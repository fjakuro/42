/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:46:55 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 17:46:55 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char	str0[] = "abcdef";
// 	bzero(str0, 5);
// 	for (int i = 0; i < 6; i++)
// 	{
// 		if (str0[i] == '\0')
// 			printf("(null)");
// 		else
// 			printf("%c", str0[i]);	
// 	}
// 	printf("\n");
// 	char	str0_ft[] = "abcdef";
// 	ft_bzero(str0_ft, 5);
// 	for (int i = 0; i < 6; i++)
// 	{
// 		if (str0_ft[i] == '\0')
// 			printf("(null)");
// 		else
// 			printf("%c", str0_ft[i]);	
// 	}
// 	printf("\n");

// 	char	intarr[] = {1, 2, 3, 4, 5};
// 	bzero(intarr, 3);
// 	for (int i = 0; i < 5; i++)
// 		printf("%d", intarr[i]);
// 	printf("\n");
// 	char	intarr_ft[] = {1, 2, 3, 4, 5};
// 	ft_bzero(intarr_ft, 3);
// 	for (int i = 0; i < 5; i++)
// 		printf("%d", intarr_ft[i]);
// 	printf("\n");
// }

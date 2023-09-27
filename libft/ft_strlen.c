/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:40:31 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/22 00:40:31 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("%lu\n", strlen("0123456789"));
//     printf("%lu\n", ft_strlen("0123456789"));

// 	printf("%lu\n", strlen(""));
//     printf("%lu\n", ft_strlen(""));

// 	printf("%lu\n", strlen(NULL));
//     printf("%lu\n", ft_strlen(NULL));
// }

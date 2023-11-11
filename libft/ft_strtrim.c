/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:06:05 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/11 15:58:26 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;

	if (!s1)
		return (NULL);
	head = 0;
	tail = ft_strlen(s1);
	while (s1[head] && ft_strchr(set, s1[head]))
		head++;
	while (s1[tail - 1] && ft_strchr(set, s1[tail - 1]))
		tail--;
	if (head > tail)
		head = 0;
	return (ft_substr(s1, head, tail - head));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str0 = "1234AAA22331122";
// 	char	*set0 = "1234";
// 	char	*trim0 = ft_strtrim(str0, set0);
// 	printf("%s\n", trim0);
// 	free(trim0);

// 	char	*str1 = "1234AAA22331122";
// 	char	*set1 = "A";
// 	char	*trim1 = ft_strtrim(str1, set1);
// 	printf("%s\n", trim1);
// 	free(trim1);

// 	char	*str3 = "1234AAA22331122";
// 	char	*set3 = "";
// 	char	*trim3 = ft_strtrim(str3, set3);
// 	printf("%s\n", trim3);
// 	free(trim3);

// 	char	*str4 = "";
// 	char	*set4 = "1234";
// 	char	*trim4 = ft_strtrim(str4, set4);
// 	printf("%s\n", trim4);
// 	free(trim4);

// 	char	*str5 = "";
// 	char	*set5 = "";
// 	char	*trim5 = ft_strtrim(str5, set5);
// 	printf("%s\n", trim5);
// 	free(trim5);

// 	char	*str6 = "1234AAA22331122";
// 	char	*set6 = "1234A";
// 	char	*trim6 = ft_strtrim(str6, set6);
// 	printf("%s\n", trim6);
// 	free(trim6);
// }

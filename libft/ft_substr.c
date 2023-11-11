/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:29:53 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/11 13:41:07 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str0;
// 	str0 = ft_substr("abcdef", 2, 3);
// 	printf("%s\n", str0);
// 	free(str0);

// 	char	*str1;
// 	str1 = ft_substr("abcdef", 2, 7);
// 	printf("%s\n", str1);
// 	free(str1);

// 	char	*str2;
// 	str2 = ft_substr("abcdef", 7, 0);
// 	printf("%s: ", str2);
// 	printf("%d\n", ft_strncmp(str2, "", 1));
// 	free(str2);

// 	char	*str3;
// 	str3 = ft_substr(NULL, 2, 7);
// 	printf("%p\n", str3);
// 	free(str3);

// 	system("leaks -q a.out");
// }

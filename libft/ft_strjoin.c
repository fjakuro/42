/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:31:47 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/09 15:34:33 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	size = s1_len + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (size + 1));
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, s1_len + 1);
	ft_strlcat(joined, s2, size + 1);
	return (joined);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str0 = ft_strjoin("joined", "text");
// 	printf("%s\n", str0);
// 	free(str0);
// 	char	*str1 = ft_strjoin("", "text");
// 	printf("%s\n", str1);
// 	free(str1);
// 	char	*str2 = ft_strjoin("joined", "");
// 	printf("%s\n", str2);
// 	free(str2);
// 	char	*str3 = ft_strjoin("", "");
// 	printf("%s\n", str3);
// 	free(str3);
// 	char	*str4 = ft_strjoin(NULL, "text");
// 	printf("%p\n", str4);
// 	// free(str4);
// 	char	*str5 = ft_strjoin("joined", NULL);
// 	printf("%p\n", str5);
// 	// free(str5);
// }

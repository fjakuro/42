/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:35 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 11:52:44 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicated;
	size_t	len;

	len = ft_strlen(s1);
	duplicated = (char *)malloc(sizeof(char) * (len + 1));
	if (!duplicated)
		return (NULL);
	ft_strlcpy(duplicated, s1, len + 1);
	return (duplicated);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str0;
// 	str0 = strdup("abcdef");
// 	printf("%s\n", str0);
// 	free(str0);
// 	char	*str0_ft;
// 	str0_ft = ft_strdup("abcdef");
// 	printf("%s\n", str0_ft);
// 	free(str0_ft);

// 	char	*str1;
// 	str1 = strdup("");
// 	printf("%s\n", str1);
// 	free(str1);
// 	char	*str1_ft;
// 	str1_ft = ft_strdup("");
// 	printf("%s\n", str1_ft);
// 	free(str1_ft);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:06:23 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/03 21:14:53 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nth_letter;

	if (!needle[0])
		return ((char *)haystack);
	nth_letter = 0;
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] != needle[nth_letter])
		{
			i = i - nth_letter + 1;
			nth_letter = 0;
		}
		if (haystack[i] == needle[nth_letter])
		{
			nth_letter++;
			if (needle[nth_letter] == '\0')
				return ((char *)(haystack + i - nth_letter + 1));
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdddefabcdef";

// 	printf("%s\n", strnstr(str0, "def", 20));
// 	printf("%s\n", ft_strnstr(str0, "def", 20));

// 	printf("%s\n", strnstr(str0, "def", 5));
// 	printf("%p\n", ft_strnstr(str0, "def", 5));

// 	printf("%s\n", strnstr(str0, "def", -1));
// 	printf("%s\n", ft_strnstr(str0, "ddef", -1));

// 	char	str1[] = "abcddef";
// 	printf("%s\n", strnstr(str1, "def", 20));
// 	printf("%s\n", ft_strnstr(str1, "def", 20));

// 	char	*str2 = NULL;
// 	printf("%s\n", strnstr(str2, "def", 0));
// 	printf("%p\n", ft_strnstr(str2, "def", 0));
// }

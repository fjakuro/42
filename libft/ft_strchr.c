/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:01:03 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/14 12:31:21 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdefabcdef";
// 	printf("%s\n", strchr(str0, 'e'));
// 	printf("%s\n", ft_strchr(str0, 'e'));

// 	printf("%p\n", strchr(str0, '\0'));
// 	printf("%p\n", ft_strchr(str0, '\0'));

// 	printf("%s\n", strchr(str0, 'f' + 256));
// 	printf("%s\n", ft_strchr(str0, 'f' + 256));
// }

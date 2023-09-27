/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:21:52 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/25 13:30:34 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			p = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		p = (char *)&s[i];
	return (p);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str0[] = "abcdefabcdef";
// 	printf("%p\n", strrchr(str0, 'e'));
// 	printf("%p\n", ft_strrchr(str0, 'e'));

// 	printf("%p\n", strrchr(str0, '\0'));
// 	printf("%p\n", ft_strrchr(str0, '\0'));
// }

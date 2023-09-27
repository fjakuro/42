/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:32:44 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 17:09:59 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapped;
	size_t	i;

	mapped = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mapped)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}

// #include <stdio.h>
// static int (*f)(int) = NULL;
// static char func(unsigned int i, char c)
// {
// 	(void)i;
// 	return (f(c));
// }

// int	main(void)
// {
// 	char	*str;

// 	f = ft_toupper;
// 	str = ft_strmapi("abCD", func);
// 	printf("%s\n", str);
// 	free(str);

// 	f = ft_tolower;
// 	str = ft_strmapi("abCD", func);
// 	printf("%s\n", str);
// 	free(str);
// }

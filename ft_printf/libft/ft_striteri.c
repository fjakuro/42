/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:14:15 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/23 20:23:05 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// static int (*f)(int) = NULL;
// static void func(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = f(*c);
// }

// int	main(void)
// {
// 	char	str[] = "abCD";

// 	f = ft_toupper;
// 	ft_striteri(str, func);
// 	printf("%s\n", str);

// 	f = ft_tolower;
// 	ft_striteri(str, func);
// 	printf("%s\n", str);
// }

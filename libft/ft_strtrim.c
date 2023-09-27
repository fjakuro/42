/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:06:05 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 12:56:55 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (s1[i])
	{
		if (!isin(s1[i], set))
			len++;
		i++;
	}
	trimmed = (char *)malloc(sizeof(char) * len + 1);
	if (!trimmed)
		return (NULL);
	len = 0;
	i = 0;
	while (s1[i])
	{
		if (!isin(s1[i], set))
			trimmed[len++] = s1[i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}

static int	isin(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
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
// 	char	*set1 = "";
// 	char	*trim1 = ft_strtrim(str1, set1);
// 	printf("%s\n", trim1);
// 	free(trim1);

// 	char	*str2 = "";
// 	char	*set2 = "1234";
// 	char	*trim2 = ft_strtrim(str2, set2);
// 	printf("%s\n", trim2);
// 	free(trim2);
// }

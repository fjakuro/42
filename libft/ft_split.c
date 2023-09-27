/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:51:00 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 14:54:55 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c);
static char		*my_strndup(char const *src, size_t n);
static char		**set_splitted(char **splitted, char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**splitted;	

	splitted = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!splitted)
		return (NULL);
	if (!set_splitted(splitted, s, c))
	{
		free(splitted);
		return (NULL);
	}
	return (splitted);
}

static size_t	count_words(char const *str, char c)
{
	size_t	sep_count;
	size_t	count;
	size_t	i;

	count = 0;
	sep_count = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			sep_count++;
		else
		{
			if (sep_count >= 1)
				count++;
			sep_count = 0;
		}
		i++;
	}
	return (count);
}

static char	*my_strndup(char const *src, size_t n)
{
	char	*dest;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (n < src_len)
		src_len = n;
	dest = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**set_splitted(char **splitted, char const *str, char c)
{
	size_t	i;
	size_t	start;
	size_t	index;

	start = 0;
	index = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			start = i + 1;
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			splitted[index] = my_strndup(&str[start], i + 1 - start);
			if (!splitted[index++])
			{
				while (index >= 0)
					free(splitted[--index]);
				return (NULL);
			}
		}
		i++;
	}
	splitted[index] = NULL;
	return (splitted);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "  These are  splitted   words";
// 	char	**splitted = ft_split(str, ' ');
// 	for (int i = 0; splitted[i]; i++)
// 	{
// 		printf("%s, ", splitted[i]);
// 		free(splitted[i]);
// 	}
// 	printf("\n");
// 	free(splitted);

// 	system("leaks -q a.out");
// }

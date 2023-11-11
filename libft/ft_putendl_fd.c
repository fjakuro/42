/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:40:33 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/11 16:19:00 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <fcntl.h>
// #include <sys/stat.h>
// int	main(void)
// {
// 	ft_putendl_fd("abcdef", 1);

// 	int	fd = open("./test.txt", O_RDWR | O_CREAT, S_IWRITE | S_IREAD);
// 	if (fd < 0)
// 		return (1);
// 	char	s[] = "abcdef";
// 	ft_putendl_fd(s, fd);
// 	lseek(fd, 0, SEEK_SET);
// 	size_t	len = ft_strlen(s);
// 	char	*str = (char *)malloc(sizeof(char) * (len + 1));
// 	str[len] = '\0';
// 	int	buf = read(fd, str, len);
// 	if (buf)
// 		ft_putendl_fd(str, 1);
// 	free(str);
// 	close(fd);

// 	ft_putendl_fd(NULL, 1);
// }

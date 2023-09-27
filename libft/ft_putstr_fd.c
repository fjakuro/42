/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:31:16 by yiwama            #+#    #+#             */
/*   Updated: 2023/09/26 19:38:08 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>
// int	main(void)
// {
// 	ft_putstr_fd("abcdef", 1);
// 	write(1, "\n", 1);

// 	int	fd = open("./test.txt", O_RDWR | O_CREAT, S_IWRITE | S_IREAD);
// 	if (fd < 0)
// 		return (1);
// 	char	s[] = "abcdef";
// 	ft_putstr_fd(s, fd);
// 	lseek(fd, 0, SEEK_SET);
// 	size_t	len = ft_strlen(s);
// 	char	*str = (char *)malloc(sizeof(char) * (len + 1));
// 	str[len] = '\0';
// 	int	buf = read(fd, str, len);
// 	if (buf)
// 		ft_putstr_fd(str, 1);
// 	free(str);
// 	close(fd);
// 	write(1, "\n", 1);
// }

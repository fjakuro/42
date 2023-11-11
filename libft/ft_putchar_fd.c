/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:34:10 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/11 16:12:58 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

// #include <fcntl.h>
// #include <sys/stat.h>
// int	main(void)
// {
// 	ft_putchar_fd('a', 1);
// 	write(1, "\n", 1);

// 	int	fd = open("./test.txt", O_RDWR | O_CREAT, S_IWRITE | S_IREAD);
// 	if (fd < 0)
// 		return (1);
// 	ft_putchar_fd('a', fd);
// 	lseek(fd, 0, SEEK_SET);
// 	char	str[2];
// 	int	buf = read(fd, str, 1);
// 	if (buf)
// 		ft_putchar_fd(str[0], 1);
// 	close(fd);
// 	write(1, "\n", 1);
// }

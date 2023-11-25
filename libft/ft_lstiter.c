/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:38:07 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/11 21:38:07 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
		while (lst && f)
		{
			f(lst->content);
			lst = lst->next;
		}
}

// #include <stdio.h>
// void	func(void *p)
// {
// 	size_t	i = 0;
// 	char	*str = (char *)p;

// 	while (str[i])
// 	{
// 		str[i] += 1;
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew(ft_strdup("abcde"));
// 	ft_lstadd_back(&lst0, ft_lstnew(ft_strdup("ABCDE")));
// 	ft_lstiter(lst0, func);
// 	printf("%s, %s\n", (char *)lst0->content, (char *)lst0->next->content);
// }
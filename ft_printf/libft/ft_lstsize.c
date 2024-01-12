/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:36:14 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/12 16:36:14 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew("abcde");
// 	t_list	*add0 = ft_lstnew("ABCDE");
// 	ft_lstadd_front(&lst0, add0);
// 	printf("%d\n", ft_lstsize(lst0));
// 	// printf("%s, %s\n", (char *)lst0->content, (char *)lst0->next->content);
// 	free(lst0->next);
// 	free(lst0);

// 	t_list	*lst1 = NULL;
// 	printf("%d\n", ft_lstsize(lst1));
// }

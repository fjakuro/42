/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:39:41 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/19 23:39:41 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (lst)
	{
		while (*lst)
		{
			current = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(current, del);
		}
	}
}

// #include <stdio.h>
// void	testdel_cl(void *ptr)
// {
// 	ptr = NULL;
// 	free(ptr);
// }

// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew(ft_strdup("abcde"));
// 	// ft_lstclear(&lst0, testdel_cl);
// 	printf("%s\n", (char *)lst0->content);

// 	t_list	*lst1 = ft_lstnew(ft_strdup("abcde"));
// 	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("ABCDE")));
// 	// ft_lstclear(&lst1, testdel_cl);
// 	printf("%s, %s\n", (char *)lst1->content, (char *)lst1->next->content);
// 	free(lst1->content);

// 	t_list	*lst2 = ft_lstnew((void *)42);
// 	ft_lstadd_back(&lst2, ft_lstnew((void *)24));
// 	// ft_lstclear(&lst2, testdel_cl);
// 	printf("%lu, %lu\n", (size_t)lst2->content, (size_t)lst2->next->content);
// }
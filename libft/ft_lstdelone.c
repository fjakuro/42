/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:08:58 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/19 22:08:58 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}

// #include <stdio.h>
// void	testdel(void *ptr)
// {
// 	free(ptr);
// }

// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew(ft_strdup("abcde"));
// 	// ft_lstdelone(lst0, testdel);
// 	printf("%s\n", (char *)lst0->content);

// 	t_list	*lst1 = ft_lstnew(ft_strdup("abcde"));
// 	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("ABCDE")));
// 	// ft_lstdelone(lst1->next, testdel);
// 	printf("%s, %s\n", (char *)lst1->content, (char *)lst1->next->content);
// 	free(lst1->content);
// 	free(lst1);

// 	t_list	*lst2 = ft_lstnew((void *)42);
// 	ft_lstadd_back(&lst2, ft_lstnew((void *)24));
// 	ft_lstdelone(lst2->next, testdel);
// 	printf("%lu, %lu\n", (size_t)lst2->content, (size_t)lst2->next->content);
// 	free(lst2);
// }

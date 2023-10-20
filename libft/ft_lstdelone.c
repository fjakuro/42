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
	if (lst && del)
	{
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
// 	t_list	*lst0 = ft_lstnew("abcde");
// 	t_list	*add00 = ft_lstnew("ABCDE");
// 	t_list	*add01 = ft_lstnew("fghij");
// 	ft_lstadd_back(&lst0, add00);
// 	ft_lstadd_back(&lst0, add01);
// 	free(lst0->next->next);
// 	ft_lstdelone(lst0->next, testdel);
// 	lst0->next = NULL;
// 	printf("%s, %s\n", (char *)lst0->content, (char *)lst0->next->content);
// 	free(lst0);

// 	// t_list	*lst1 = ft_lstnew((void *)42);
// 	// t_list	*add1 = ft_lstnew((void *)24);
// 	// ft_lstadd_back(&lst1, add1);
// 	// printf("%lu, %lu\n", (size_t)lst1->content, (size_t)lst1->next->content);
// 	// free(lst1->next);
// 	// free(lst1);

// 	// t_list	*lst2 = NULL;
// 	// t_list	*add2 = ft_lstnew((void *)24);
// 	// ft_lstadd_back(&lst2, add2);
// 	// // printf("%lu, %lu\n", (size_t)lst2->content, (size_t)lst2->next->content);
// 	// free(lst2->next);
// 	// free(lst2);
// }

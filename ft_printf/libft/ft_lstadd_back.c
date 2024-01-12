/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:33:08 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/12 17:33:08 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst)
			ft_lstlast(*lst)->next = new;
		else
			*lst = new;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew("abcde");
// 	t_list	*add0 = ft_lstnew("ABCDE");
// 	ft_lstadd_back(&lst0, add0);
// 	printf("%s, %s\n", (char *)lst0->content, (char *)lst0->next->content);
// 	free(lst0->next);
// 	free(lst0);

// 	t_list	*lst1 = ft_lstnew((void *)42);
// 	t_list	*add1 = ft_lstnew((void *)24);
// 	ft_lstadd_back(&lst1, add1);
// 	printf("%lu, %lu\n", (size_t)lst1->content, (size_t)lst1->next->content);
// 	free(lst1->next);
// 	free(lst1);

// 	t_list	*lst2 = NULL;
// 	t_list	*add2 = ft_lstnew((void *)24);
// 	ft_lstadd_back(&lst2, add2);
// 	// printf("%lu, %lu\n", (size_t)lst2->content, (size_t)lst2->next->content);
// 	free(lst2->next);
// 	free(lst2);
// }

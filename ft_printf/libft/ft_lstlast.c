/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:20:06 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/12 17:20:06 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew("abcde");
// 	t_list	*add0 = ft_lstnew("ABCDE");
// 	ft_lstadd_front(&lst0, add0);
// 	printf("%s\n", (char *)ft_lstlast(lst0)->content);
// 	free(lst0->next);
// 	free(lst0);

// 	t_list	*lst1 = ft_lstnew("abcde");
// 	printf("%s\n", (char *)ft_lstlast(lst1)->content);
// 	free(lst1);

// 	t_list	*lst2 = NULL;
// 	printf("%p\n", (char *)ft_lstlast(lst2));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:09:48 by yiwama            #+#    #+#             */
/*   Updated: 2023/10/12 09:09:48 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew("abcde");
// 	printf("%s\n", (char *)lst0->content);
// 	free(lst0);

// 	t_list *lst1 = ft_lstnew((void *)42);
// 	printf("%lu\n", (size_t)lst1->content);
// 	free(lst1);
// }

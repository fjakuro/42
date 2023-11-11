/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwama <yiwama@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:19:59 by yiwama            #+#    #+#             */
/*   Updated: 2023/11/11 22:19:59 by yiwama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	t_list	*tmp;

	mapped = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		tmp->content = f(tmp->content);
		ft_lstadd_back(&mapped, tmp);
		lst = lst->next;
	}
	return (mapped);
}

// #include <stdio.h>
// void	*func(void *p)
// {
// 	size_t	i = 0;
// 	char	*str = (char *)p;

// 	while (str[i])
// 	{
// 		str[i] += 1;
// 		i++;
// 	}
// 	return (void *)(str);
// }

// void	testdel(void *ptr)
// {
// 	free(ptr);
// }

// int	main(void)
// {
// 	t_list	*lst0 = ft_lstnew(ft_strdup("abcde"));
// 	ft_lstadd_back(&lst0, ft_lstnew(ft_strdup("ABCDE")));
// 	t_list	*mapped0 = ft_lstmap(lst0, func, testdel);
// 	printf("%s, ", (char *)mapped0->content);
// 	printf("%s\n", (char *)mapped0->next->content);
// 	free(lst0);
// 	free(mapped0);
// }

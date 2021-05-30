/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcus <marcus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:03:33 by marcus            #+#    #+#             */
/*   Updated: 2021/05/30 16:45:51 by marcus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (lst == NULL)
		return (NULL);
	new_elem = ft_lstnew((*f)(lst->content));
	if (new_elem == NULL)
	{
		free(new_elem);
		return (NULL);
	}
	new_lst = new_elem;
	lst = lst->next;
	while (lst)
	{
		new_elem->next = ft_lstnew((*f)(lst->content));
		if (new_elem == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_elem = new_elem->next;
		lst = lst->next;
	}
	return (new_lst);
}

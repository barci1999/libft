/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:04:35 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/02 21:46:58 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *first;
	void *temp;
	first = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		temp = f(lst->content);
		newlst = ft_lstnew(temp);
		if (newlst == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, newlst);
		lst = lst->next;
	}
	return (first);
}
 
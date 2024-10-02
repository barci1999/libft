/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:47:01 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/02 19:31:22 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;
	if(!*lst || !new)
	{
		*lst = new;
		return;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
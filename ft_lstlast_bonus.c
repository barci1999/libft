/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:40:08 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/02 19:26:31 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while(lst->next != NULL)
		lst = lst->next;
	return(lst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:46:49 by pablalva          #+#    #+#             */
/*   Updated: 2024/09/26 17:51:25 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, size * nmemb);
	return (p);
}

/* int	main(void)
{
	char *replica;
	char *original;
	size_t nmemb;

	nmemb = 10;
	replica = ft_calloc(nmemb , sizeof(char));
	original = calloc(nmemb , sizeof(char));

	return(0);
} */
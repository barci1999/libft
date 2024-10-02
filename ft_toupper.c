/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:32:33 by pablalva          #+#    #+#             */
/*   Updated: 2024/09/26 17:53:36 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		return (a - 32);
	return (a);
}
/*int	main(void)
{
	int c;
	c = '9';
	printf("%c",(char)ft_toupper((int)c));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:37:14 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/01 17:04:29 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_word(char const *s, char c, int i)
{
	int	l;

	l = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i + 1] == c))
		{
			i += 1;
		}
		if (s[i] == c)
			return (l);
		i += 1;
		l++;
	}
	return (l);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			word++;
		i++;
	}
	return (word);
}

void asig_word(char const *s, char c, char **dest)
{
	int	p;
	int i;
	int len;
	
	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = len_word(s, c, i);
			dest[p] = ft_substr(s, i , len);
			i = i + len;
			if (dest == NULL)
			{
				while (p >= 0)
				{
					free(dest[p]);
					p--;
				}
				free(dest);
				return ;
			}
				p++;
		}
		if (s[i] != '\0')
			(i)++;
	}
	dest[p] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		word_count;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	dest = malloc((word_count + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	asig_word(s, c, dest);
	
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:39:05 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:39:06 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_words(const char *s, char c)
{
	size_t	i;
	size_t	nbwords;

	i = 0;
	nbwords = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
			{
				nbwords++;
			}
		}
		i++;
	}
	return (nbwords);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	*start;
	char	**result;

	if (!s)
		return (0);
	words = nb_words((char *)s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	start = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (start != s)
				*(result++) = ft_strsub(start, 0, s - start);
			start = (char *)s + 1;
		}
		++s;
	}
	if (start != s)
		*(result++) = ft_strsub(start, 0, s - start);
	*result = NULL;
	return (result - words);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:28:44 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/26 14:09:52 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (n--)
	{
		if (s[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

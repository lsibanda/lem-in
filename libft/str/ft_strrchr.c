/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:38:31 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:38:32 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	d;

	d = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == d)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:28:31 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/26 14:09:37 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*bdest;
	unsigned char	*bsrc;
	size_t			i;

	bdest = (unsigned char *)dest;
	bsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		bdest[i] = bsrc[i];
		if ((unsigned char)c == bsrc[i])
			return ((void*)&bdest[i + 1]);
		i++;
	}
	return (NULL);
}

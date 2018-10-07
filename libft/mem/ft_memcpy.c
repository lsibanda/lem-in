/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:29:14 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:29:16 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*bdest;
	char	*bsrc;

	i = 0;
	bdest = (char *)dest;
	bsrc = (char *)src;
	while (i < n)
	{
		bdest[i] = bsrc[i];
		i++;
	}
	return (bdest);
}

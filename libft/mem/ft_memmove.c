/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:29:48 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:29:50 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_src;
	unsigned char	*c_dest;

	i = 0;
	c_src = (unsigned char *)src;
	c_dest = (unsigned char *)dest;
	if (c_dest < c_src)
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			c_dest[i] = c_src[i];
			i--;
		}
	}
	return ((void *)c_dest);
}

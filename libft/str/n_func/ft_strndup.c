/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:42:22 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:42:24 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*dest;

	dest = ft_strnew(n);
	if (dest)
	{
		dest = ft_strncpy(dest, str, n);
		return (dest);
	}
	else
		return (NULL);
}

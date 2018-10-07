/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:41:52 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:41:54 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max - 1 && s1[i] != '\0' &&
		(unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
	}
	if (max)
		return (unsigned char)s1[i] - (unsigned char)s2[i];
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:35:11 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:35:13 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' && (unsigned char)s1[i] == (unsigned char)s2[i])
		{
			i++;
		}
		return (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (1);
}

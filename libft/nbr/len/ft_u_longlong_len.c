/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_longlong_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:32:38 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:51:41 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_u_longlong_len(unsigned long long nb)
{
	size_t		len;

	len = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

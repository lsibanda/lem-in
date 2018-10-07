/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_len_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:32:25 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:32:26 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_u_len_base(unsigned long long int nb, char base)
{
	size_t len;

	len = 1;
	while (nb >= (unsigned long long)base)
	{
		nb = nb / base;
		len++;
	}
	return (len);
}

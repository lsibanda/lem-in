/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 14:22:35 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/26 14:05:49 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_hex_len(unsigned long long int nb)
{
	int char_written;

	char_written = 0;
	if (nb < 16)
		char_written = 1;
	else
		char_written = ft_u_len_base(nb, 16);
	return (char_written);
}

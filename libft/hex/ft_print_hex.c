/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:24:55 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/26 14:06:14 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(long long int nb, const char *str)
{
	if (nb < 16)
		ft_putchar(str[nb]);
	else
	{
		ft_print_u_hex(nb / 16, str);
		ft_putchar(str[nb % 16]);
	}
}

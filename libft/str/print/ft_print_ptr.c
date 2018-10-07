/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:44:08 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:44:09 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_ptr(size_t nb)
{
	char *str;

	str = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(str[nb]);
	else
	{
		ft_print_ptr(nb / 16);
		ft_putchar(str[nb % 16]);
	}
}

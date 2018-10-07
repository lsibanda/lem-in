/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:24:04 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:24:06 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wcharlen(wchar_t c)
{
	if (c < 0 || (c >= 0xd800 && c < 0xe000))
		return (0);
	if ((c <= 127 && MB_CUR_MAX >= 1) || (c <= 255 && MB_CUR_MAX == 1))
		return (1);
	else if (c <= 2047 && MB_CUR_MAX >= 2)
		return (2);
	else if (c <= 65535 && MB_CUR_MAX >= 3)
		return (3);
	else if (c <= 1114111 && MB_CUR_MAX >= 4)
		return (4);
	return (-1);
}

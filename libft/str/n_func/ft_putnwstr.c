/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:41:22 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:41:24 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnwstr(wchar_t *str, int len)
{
	int i;

	i = 0;
	while (len > 0 && str[i] != '\0')
	{
		if (ft_wcharlen(str[i]) > len)
			break ;
		else
			ft_putwchar(str[i]);
		i++;
		len -= ft_wcharlen(str[i]);
	}
}

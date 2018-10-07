/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:43:20 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:43:22 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wstrnlen(wchar_t *str, int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if ((len + ft_wcharlen(str[i])) > n)
			break ;
		else
			len += ft_wcharlen(str[i]);
		i++;
	}
	return (len);
}

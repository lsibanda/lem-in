/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:31:19 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:31:22 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = ft_longlong_len(n) - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = ft_strnew(ft_longlong_len(n));
	if (s == NULL)
		return (0);
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	while (i >= 0 && s[i] != '-')
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

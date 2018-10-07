/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:30:37 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:30:39 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	long long		res;
	int				sign;
	char			*s;

	sign = 1;
	res = 0;
	s = (char *)str;
	s = ft_skip_whitespace(s);
	if (*s == '-' && s++)
		sign = -1;
	else if (*s == '+' && sign != -1)
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += (*s++ - '0');
	}
	return (res * sign);
}

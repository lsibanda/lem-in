/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:39:49 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:39:50 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	const char	*temp;

	if (!s)
		return (NULL);
	while (ft_is_space(*s))
		s++;
	if (!*s)
		return (ft_strdup(""));
	temp = ft_strchr(s, '\0') - 1;
	while (ft_is_space(*temp))
		temp--;
	return (ft_strsub(s, 0, temp - s + 1));
}

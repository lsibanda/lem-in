/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_multi_chr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:34:16 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:34:20 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_multi_chr(char *str, char *characters)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (characters[j] != '\0')
		{
			if (str[i] == characters[j])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

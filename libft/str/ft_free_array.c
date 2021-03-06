/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:33:43 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:33:44 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char ***array)
{
	int i;

	i = 0;
	while ((*array)[i])
	{
		free((*array)[i++]);
	}
	free(*array);
}

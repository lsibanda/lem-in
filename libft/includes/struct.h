/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:25:57 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 10:25:59 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_format
{
	char	conversion;
	int		precision;
	int		min_width;
	int		zero;
	int		plus;
	int		minus;
	int		pound;
	int		space;
	int		l;
	int		h;
	int		j;
	int		z;
}				t_format;

#endif

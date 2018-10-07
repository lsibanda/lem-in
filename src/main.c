/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:44:11 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/27 13:28:43 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int	main(void)
{
	t_game	game;

	game = initialize_game();
	read_input(&game);
	if (path_exists(&game))
	{
		find_path(&game);
		print_path(&game);
	}
	else
		ft_putstr("ERROR");
	ft_putchar('\n');
	free_game(&game);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 12:54:00 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/27 13:31:01 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void			free_game(t_game *game)
{
	t_room			*tmp_room;

	free(game->start);
	free(game->end);
	while (game->rooms)
	{
		tmp_room = game->rooms;
		free_connections(&tmp_room->connections);
		game->rooms = game->rooms->next;
		free(tmp_room->name);
		free(tmp_room->prev);
		free(tmp_room);
	}
	free_connections(&game->path);
	free_ants(&game->ants);
	free(game->rooms);
}

void			free_connections(t_connection **connections)
{
	t_connection	*tmp_connection;

	while (*connections)
	{
		tmp_connection = *connections;
		*connections = (*connections)->next;
		free(tmp_connection->name);
		free(tmp_connection);
	}
	free(*connections);
}

void			free_ants(t_ant **ants)
{
	t_ant	*tmp_ant;

	while (*ants)
	{
		tmp_ant = *ants;
		*ants = (*ants)->next;
		free(tmp_ant);
	}
	free(*ants);
}

int				exit_incomplete_game(t_game *game)
{
	if (!game->nb_ants || !game->start || !game->end || !game->rooms
	|| !game->rooms->connections)
	{
		if (game)
			free_game(game);
		ft_putstr("ERROR");
		ft_putchar('\n');
		exit(0);
	}
	else
		return (0);
}

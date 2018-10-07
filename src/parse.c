/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:44:28 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/27 13:30:11 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	read_input(t_game *game)
{
	char	*line;
	int		i;

	i = 0;
	if (get_next_line(0, &line) == 0)
		exit_incomplete_game(game);
	game->map = (char**)malloc(sizeof(char) * (20000 + 1));
	get_ant_nb(line, game, &i);
	while (get_next_line(0, &line) > 0 && ft_strlen(line) > 0)
	{
		game->map[i++] = line;
		if (!(line[0] == '#' && line[1] != '#'))
			if (!parse_line(line, game, &i))
			{
				return ;
			}
	}
	game->map[i] = NULL;
	i = -1;
	if (line)
		;
	if (!game->start || !game->end || !game->rooms || !game->rooms->connections)
		exit_incomplete_game(game);
	while (game->map[++i])
		ft_putendl(game->map[i]);
}

void	get_ant_nb(char *line, t_game *game, int *i)
{
	int		ants;

	if (line == 0)
		exit_incomplete_game(game);
	if (line[0] != '#')
	{
		if (!ft_isnumber(line))
			exit_incomplete_game(game);
		game->map[(*i)++] = line;
		ants = ft_atoi(line);
		if (ants <= 0 || ants > 2147483647)
			exit_incomplete_game(game);
		game->nb_ants = ants;
	}
	else if (get_next_line(0, &line) > 0)
	{
		get_ant_nb(line, game, i);
	}
}

int		parse_line(char *line, t_game *game, int *i)
{
	int ret;

	ret = 1;
	if (line[0] == '#' && line[1] == '#')
	{
		if (ft_strcmp(&line[2], "start") == 0)
			get_start_or_end(game, 1, 0, i);
		else if (ft_strcmp(&line[2], "end") == 0)
			get_start_or_end(game, 0, 1, i);
	}
	else if (!ft_strchr(line, '-'))
		ret = get_room(line, game, 0, 0);
	else if (ft_strchr(line, '-'))
		ret = get_link(line, game);
	return (ret);
}

void	get_start_or_end(t_game *game, int start, int end, int *i)
{
	char	*line;

	get_next_line(0, &line);
	if (ft_strlen(line) == 0 || (start && game->start) || (end && game->end))
		exit_incomplete_game(game);
	game->map[(*i)++] = line;
	if (line[0] != '#')
		get_room(line, game, start, end);
	else
		get_start_or_end(game, start, end, i);
}

int		get_link(char *line, t_game *game)
{
	char			**split;

	split = ft_strsplit(line, '-');
	if (!split[0] || !split[1] || !room_exists(game, split[0])
	|| !room_exists(game, split[1]))
	{
		if (!exit_incomplete_game(game))
			return (0);
	}
	save_connection(game, split[0], split[1]);
	save_connection(game, split[1], split[0]);
	ft_free_array(&split);
	return (1);
}

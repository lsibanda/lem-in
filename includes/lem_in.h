/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:46:20 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/27 13:28:20 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "libft.h"
# include "stdlib.h"

typedef struct	s_connection
{
	char				*name;
	struct s_connection	*next;
}				t_connection;

typedef struct	s_room
{
	char			*name;
	t_connection	*connections;
	int				visited;
	char			*prev;
	struct s_room	*next;
}				t_room;

typedef struct	s_ant
{
	int				nb;
	t_connection	*step;
	int				started;
	int				arrived;
	struct s_ant	*next;
}				t_ant;

typedef struct	s_game
{
	int				nb_ants;
	char			*start;
	char			*end;
	char			**map;
	t_room			*rooms;
	t_connection	*path;
	t_ant			*ants;
}				t_game;

t_game			initialize_game(void);
t_room			*new_room(void);
t_connection	*new_connection(void);
t_ant			*new_ant(void);

void			free_game(t_game *game);
void			free_connections(t_connection **connections);
void			free_ants(t_ant **ants);
int				exit_incomplete_game(t_game *game);

int				get_room(char *line, t_game *game, int start, int end);
int				room_format_error(t_game *game, char ***split);
int				room_exists(t_game	*game, char	*room);
t_room			*find_room(t_game *game, char *name);
void			add_room_end(t_game *game, t_room *room);

void			save_connection(t_game *game, char *str1, char *str2);
int				connection_in_list(t_connection *list, char *name);
t_connection	*add_connection_end(t_connection *lst, t_connection *item);
t_connection	*add_connection(t_connection *lst, t_connection *item);

void			read_input(t_game *game);
void			get_ant_nb(char *line, t_game *game, int *i);
int				parse_line(char *line, t_game *game, int *i);
void			get_start_or_end(t_game *game, int start, int end, int *i);
int				get_link(char *line, t_game *game);

int				path_exists(t_game *game);
t_connection	*queue_connect(t_game *game, t_room *room, t_connection *queue);
char			*connection_visited(t_game *game, t_connection *connections);
void			find_path(t_game *game);

int				nb_rooms_on_path(t_connection *path);
t_ant			*find_started(t_ant *lst);
void			move_ants(t_game *game, t_ant *ants);
void			print_path(t_game *game);
t_ant			*create_game_ants(t_game *game);

#endif

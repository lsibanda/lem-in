/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emerge_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 14:31:01 by lsibanda          #+#    #+#             */
/*   Updated: 2018/09/22 14:31:04 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void			save_connection(t_game *game, char *str1, char *str2)
{
	t_connection	*connection;
	t_room			*room;

	room = find_room(game, str1);
	if (connection_in_list(room->connections, str2))
		exit_incomplete_game(game);
	connection = new_connection();
	connection->name = ft_strdup(str2);
	room->connections = add_connection_end(room->connections, connection);
}

int				connection_in_list(t_connection *list, char *name)
{
	t_connection	*lst;

	lst = list;
	while (lst)
	{
		if (ft_strcmp(lst->name, name) == 0)
			return (1);
		lst = lst->next;
	}
	return (0);
}

t_connection	*add_connection_end(t_connection *lst, t_connection *item)
{
	t_connection	*list;

	if (lst == NULL)
	{
		lst = item;
		return (lst);
	}
	list = lst;
	while (list->next)
		list = list->next;
	list->next = item;
	item->next = NULL;
	return (lst);
}

t_connection	*add_connection(t_connection *lst, t_connection *item)
{
	item->next = lst;
	lst = item;
	return (lst);
}

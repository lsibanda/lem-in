# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 12:46:09 by lsibanda          #+#    #+#              #
#    Updated: 2018/09/27 13:23:52 by lsibanda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  lem-in

CC			= gcc
FLAGS		= -Wall -Werror -Wextra -g
SRC			= main.c parse.c structure_create.c free_memory.c \
			  room_functions.c emerge_functions.c solve.c print.c
OBJDIR		= obj
OBJ	= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))
##VPATH:=includes/:${VPATH}
VPATH:=src/:${VPATH}

all: $(NAME)

$(NAME): lib $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $@ -I includes/ -L libft/ -lft

$(OBJDIR)/%.o: %.c
	@mkdir -p obj
	@$(CC) $(FLAGS) -c $< -o $@ -I includes/ -I libft/includes/
lib:
	@make -C libft/

clean:
	@$(RM) -rf $(OBJDIR)
	@make clean -C libft/

fclean: clean
	@$(RM) -f $(NAME)
	@make fclean -C libft/

re:
	@make fclean
	@make
	
.PHONY: all clean fclean re

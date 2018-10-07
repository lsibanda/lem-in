# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/21 14:21:12 by lsibanda          #+#    #+#              #
#    Updated: 2018/09/27 13:36:51 by lsibanda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=  libft.a

CC			= gcc
FLAGS		= -Wall -Werror -Wextra -g
SRC			= ft_atoi.c ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memdel.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c \
			ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
			ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_atoi_base.c \
			ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_puterror.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_is_space.c\
			ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_strrev.c ft_putnbrendl.c \
			ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_skip_whitespace.c ft_abs.c \
			ft_longlong_len.c ft_putnstr.c ft_put_longlong_base.c ft_put_u_longlong_base.c ft_itoa_longlong_base.c \
			ft_putnchar.c ft_print_hex.c ft_print_ptr.c ft_print_u_hex.c ft_hex_len.c ft_ptr_len_base.c ft_putwchar.c \
			ft_u_longlong_len.c ft_len_base.c ft_u_len_base.c ft_strndup.c ft_str_multi_chr.c ft_wcharlen.c  ft_putwstr.c\
			ft_wstrlen.c ft_putnwstr.c ft_wstrnlen.c get_next_line.c  ft_free_array.c ft_isnumber.c ft_exit_error.c ft_strsub_to.c
OBJDIR		= obj
OBJ	= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))
VPATH:=char/:${VPATH}
VPATH:=hex/:${VPATH}
VPATH:=lst/:${VPATH}
VPATH:=mem/:${VPATH}
VPATH:=nbr/:${VPATH}
VPATH:=nbr/print/:${VPATH}
VPATH:=nbr/len/:${VPATH}
VPATH:=str/:${VPATH}
VPATH:=str/print/:${VPATH}
VPATH:=str/n_func/:${VPATH}
VPATH:=str/len/:${VPATH}
VPATH:=includes/:${VPATH}

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c
	@mkdir -p obj
	@$(CC) $(FLAGS) -c $< -o $@ -I includes/

dev: $(NAME)
	gcc -o a.out -I includes/ main.c -L. -lft

clean:
	@$(RM) -rf $(OBJDIR)

fclean: clean
	@$(RM) -f $(NAME)
	@echo "libft.a deleted"

re:
	@make fclean
	@make
	
.PHONY: all clean fclean re

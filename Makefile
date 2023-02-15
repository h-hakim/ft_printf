# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 01:06:33 by hhakim            #+#    #+#              #
#    Updated: 2022/12/19 02:46:57 by hhakim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
# ar-- create and maintain library archives
#options ar rcs: replace, create, sort (for library archives)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
PRINTF = 		ft_print_utils \
			ft_print_pntrhexa \
			ft_parse_flags \
			ft_printf \

#add prefix adds the './' symbiol to the file name.
#add suufix adds the '.c' extesnion to the end.

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(PRINTF)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(PRINTF)))

LIBFT = libft

all: $(NAME)

$(NAME): $(OBJS)
		make -C $(LIBFT)
		@cp libft/libft.a .
		@mv libft.a $(NAME)
		$(AR) $(NAME) $(OBJS)


%.o : %.c $(SRCS)
		$(CC) $(CFLAGS) -c $<  -o $@
clean:
		$(RM) $(OBJS)
		make clean -C $(LIBFT)
fclean: clean
		$(RM) $(NAME)
		make fclean -C $(LIBFT)
		
re: clean all

.PHONY: all clean fclean re

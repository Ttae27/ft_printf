# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phongpai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 21:18:31 by phongpai          #+#    #+#              #
#    Updated: 2022/05/29 12:03:22 by phongpai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_printf.c srcs/ft_unitoa.c  srcs/make_16.c srcs/make_16p.c \
			srcs/print_csdiu.c srcs/print_pxx.c srcs/print_perc.c
LIBFT		= libft/ft_calloc.c libft/ft_itoa.c libft/ft_strlen.c libft/ft_strdup.c
OBJS		= $(SRCS:.c=.o)
OBJS_LIB	= $(LIBFT:.c=.o)
CC			= gcc
CFLAG		= -Wall -Wextra -Werror
NAME		= libftprintf.a

all:	$(NAME)

%.o:	%.c
	$(CC) $(CFLAG) -c $< -o $@ 

$(NAME):	$(OBJS) $(OBJS_LIB)
	ar -rcs $(NAME) $(OBJS) $(OBJS_LIB)

clean:
	rm -f $(OBJS) $(OBJS_LIB)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
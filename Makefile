# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 12:10:06 by dbarrene          #+#    #+#              #
#    Updated: 2023/11/28 18:18:41 by dbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTPATH = ./libft

LIBFT = $(LIBFTPATH)/libft.a

SRCS = ft_format_check.c\
	   ft_iterate_format.c\
	   ft_printf.c\
	   ft_put_hex.c\
	   ft_put_ptr.c\
	   ft_put_unsigned.c\
	   ft_putchar_mod.c\
	   ft_putnbr_mod.c\
	   ft_putstr_mod.c\

OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	cc -Wall -Wextra -Werror -c $(@:.o=.c) -o $@

$(NAME): $(LIBFTPATH) $(OBJS)
	make -C $(LIBFTPATH)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFTPATH)
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFTPATH)
re: fclean $(NAME)


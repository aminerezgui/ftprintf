# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arezgui <arezgui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:44:10 by arezgui           #+#    #+#              #
#    Updated: 2022/03/03 15:44:20 by arezgui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_itoa_base_positive.c \
		ft_print_char.c \
		ft_print_hexa.c \
		ft_print_integer.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_print_u.c \
		ft_printf.c

NAME = libftprintf.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = cc

CC_FLAGS = -Wall -Wextra -Werror


LIBFT = libft

OBJECTS_PREFIXED_LIBFT = $(LIBFT)/$(OBJS_DIR)/*.o


$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@make -C $(LIBFT)
	@ar r $(NAME) $(OBJECTS_PREFIXED) $(OBJECTS_PREFIXED_LIBFT)
	@echo "LibftPintf Done !"

all: $(NAME)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS_DIR)

fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)

re: fclean all

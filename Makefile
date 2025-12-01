# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 19:15:28 by cpietrza          #+#    #+#              #
#    Updated: 2025/12/01 20:15:36 by cpietrza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

FOLDER_SOURCE = src/
FOLDER_BUILD = .build
FOLDER_INCLUDE = include/

SOURCES = $(FOLDER_SOURCE)ft_check.c \
          $(FOLDER_SOURCE)ft_printf.c \
          $(FOLDER_SOURCE)ft_putchar.c \
          $(FOLDER_SOURCE)ft_putnbr.c \
          $(FOLDER_SOURCE)ft_putstr.c \
          $(FOLDER_SOURCE)ft_putnbr_unsigned.c

OBJETS = $(SOURCES:$(FOLDER_SOURCE)%.c=$(FOLDER_BUILD)/%.o)

$(FOLDER_BUILD):
	@mkdir -p $(FOLDER_BUILD)

all: $(NAME)

$(NAME): $(OBJETS)
	ar rcs $(NAME) $(OBJETS)

$(FOLDER_BUILD)/%.o: $(FOLDER_SOURCE)%.c $(FOLDER_INCLUDE)ft_printf.h | $(FOLDER_BUILD)
	$(CC) $(CFLAGS) -I $(FOLDER_INCLUDE) -c $< -o $@

clean:
	rm -rf $(FOLDER_BUILD)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	@echo "Running test..."
	@$(CC) $(CFLAGS) -I $(FOLDER_INCLUDE) $(SOURCES) main.c -o $@
	./$@

.PHONY: all clean fclean re test

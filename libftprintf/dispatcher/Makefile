# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/04/29 11:36:30 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dispatcher module

NAME = dispatcher

CC = gcc

#OPTI_FLAGS = -fstrict-aliasing
OPTI_FLAGS = -fno-builtin -O2

FLAGS = -Werror -Wall -Wextra $(OPTI_FLAGS)

INCS = -I./../../libft/ -I./../../libftwchar/ -I./../specifiers/ -I./../

O_FILES = dispatcher.o

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;181m%-20s \e[38;5;88mobject built\n\e[0m" $(basename $@)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;52mfiles%1sdeleted\n\e[0m"

re: clean objects

# Objects rule to be used when building larger libraries
objects: $(O_FILES)

.PHONY : clean re objects

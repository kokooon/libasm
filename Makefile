# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarzull <gmarzull@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 12:09:07 by gmarzull          #+#    #+#              #
#    Updated: 2024/10/27 14:26:23 by gmarzull         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a

SRCS 	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

NASM 	= nasm

NFLAGS	= -f elf64

OBJ		= $(SRCS:.s=.o)

%.o : %.s
	$(NASM) $(NFLAGS) $< -o $@

all		: $(NAME)

$(NAME) : $(OBJ)
		ar -rc $(NAME) $(OBJ)

test	: 
		@gcc -o main main.c -L. -lasm
		@./main

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)
		rm -f text.txt

re : fclean all
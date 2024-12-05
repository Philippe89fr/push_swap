# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 17:01:53 by prambaud          #+#    #+#              #
#    Updated: 2024/12/03 17:34:10 by prambaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap
LIBFT       = libft/libft.a
SRCS          = ./libft/ft_memcpy.c \
		./libft/ft_calloc.c \
		./libft/ft_putendl_fd.c \
		./libft/ft_strnstr.c \
		./libft/ft_isalpha.c \
		./libft/ft_strtrim.c \
		./libft/ft_memmove.c \
		./libft/ft_isalnum.c \
		./libft/ft_isdigit.c \
		./libft/ft_isprint.c \
		./libft/ft_tolower.c \
		./libft/ft_toupper.c \
		./libft/ft_strncmp.c \
		./libft/ft_strlen.c \
		./libft/ft_putstr_fd.c \
		./libft/ft_bzero.c \
		./libft/ft_memset.c \
		./libft/ft_substr.c \
		./libft/ft_strmapi.c \
		./libft/ft_strchr.c \
		./libft/ft_atoi.c \
		./libft/ft_isascii.c \
		./libft/ft_itoa.c \
		./libft/ft_putchar.c \
		./libft/ft_putchar_fd.c \
		./libft/ft_strjoin.c \
		./libft/ft_split.c \
		./libft/ft_putnbr_fd.c \
		./libft/ft_memchr.c \
		./libft/ft_strrchr.c \
		./libft/ft_striteri.c \
		./libft/ft_strdup.c \
		./libft/ft_memcmp.c \
		./libft/ft_strlcpy.c \
		./libft/ft_strlcat.c \
		./libft/ft_lstclear_bonus.c \
		./libft/ft_lstlast_bonus.c \
		./libft/ft_lstsize_bonus.c \
		./libft/ft_lstadd_back_bonus.c \
		./libft/ft_lstdelone_bonus.c \
		./libft/ft_lstadd_front_bonus.c \
		./libft/ft_lstiter_bonus.c \
		./libft/ft_lstnew_bonus.c \
        ./libft/ft_printf.c \
		./libft/ft_putstr.c \
		./libft/ft_putnbr.c \
		./libft/ft_putnbru.c \
		./libft/ft_sizeint.c \
		./libft/ft_printhex.c \
		./libft/ft_printhexx.c \
		./libft/ft_printpointer.c \
		./srcs/ft_set_up_lc.c \
		./srcs/ft_print_lc.c \
		./srcs/ft_manip_lc.c \
		./srcs/ft_manip_lc2.c \
		./srcs/ft_manip_lc3.c \
		./srcs/ft_algo.c \
		./srcs/ft_pushall_a_small.c \
		./srcs/ft_pushall_a6.c \
		./srcs/ft_pushall_a18a.c \
		./srcs/ft_pushall_a18b.c \
		./srcs/ft_input_checker.c \
		./srcs/main2.c \
        
OBJS        = ${SRCS:.c=.o}
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
MAKE        = make
CLEAN       = make clean
FCLEAN      = make fclean
RM          = rm -rf

# Règle de construction pour le fichier binaire
${NAME}:${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

# Règle pour transformer .c en .o
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:    ${NAME}

clean:
	${CLEAN} -C libft
	rm -f ${OBJS}

fclean:    clean
	${FCLEAN} -C libft
	rm -f ${NAME}
        
re:     fclean all

.PHONY: all clean fclean re bonus

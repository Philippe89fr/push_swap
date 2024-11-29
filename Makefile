# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 14:38:20 by prambaud          #+#    #+#              #
#    Updated: 2024/11/29 18:29:19 by prambaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_algo.c \
		ft_manip_lc.c \
		ft_set_up_lc.c \
		ft_print_lc.c \
		ft_algo_tools.c

NAME	= pushswap.a

OBJS	= $(SRC:.c=.o)

.c.o	:
		cc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : ${NAME}

clean :
		rm -f ${OBJS} ${BOBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all

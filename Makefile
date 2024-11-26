# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vincent <vincent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 14:38:20 by prambaud          #+#    #+#              #
#    Updated: 2024/11/23 12:59:36 by vincent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_algo.c \
		ft_manip_lc.c \
		ft_set_up_lc.c \

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

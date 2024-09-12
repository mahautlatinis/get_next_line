# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 16:37:59 by mahautlatin       #+#    #+#              #
#    Updated: 2023/10/07 16:38:00 by mahautlatin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 			./get_next_line/get_next_line.c \
				./get_next_line/get_next_line_utils.c

SRC_B = 		./get_next_line/bonus/get_next_line_bonus.c \
				./get_next_line/bonus/get_next_line_utils_bonus.c

OBJS_DEFAULT	= ${SRC:.c=.o}

OBJS_BONUS		= ${SRC_B:.c=.o}

NAME			= get_next_line

all:			${NAME}

clean:
				@ ${RM} ${OBJS} ${OBJSBONUS}
				@ echo "Successfully remove object files"

fclean: 		clean

re: 			fclean all

norminette:
				norminette ./get_next_line

test:
				cd ./tester && make && ./GNL_lover.sh

.PHONY:			bonus all clean fclean re
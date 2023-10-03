SRC = 	./get_next_line/get_next_line.c \
		./get_next_line/get_next_line_utils.c

SRC_B = ./get_next_line/bonus/get_next_line_bonus.c \
		./get_next_line/bonus/get_next_line_utils_bonus.c

OBJS_DEFAULT	= ${SRC:.c=.o}

OBJS_BONUS		= ${SRC_B:.c=.o}

NAME			= get_next_line

all:		${NAME}
			./tester/GNL_lover.sh

#=======================================#
#[PUSH_SWAP] Fonctions partie principale#
#=======================================#

SRC_PUSH_SWAP = check_argv.c fill_tab.c ft_atoi.c ft_calloc.c \
				ft_free.c ft_isdigit.c ft_putstr.c ft_strlen.c push_swap.c \
				red_button.c ft_strncmp.c input_error.c

OBJS_PUSH_SWAP = ${SRC_PUSH_SWAP:.c=.o}

#====#
#Tags#
#====#

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SANIFLAG = -fsanitize=address -g

#=========#
#Commandes#
#=========#
.c.o:
					@gcc ${CFLAGS} -c $< -o ${<:.c=.o}
					@printf "\e[32;3m.\e[0m"
					

all:				${NAME}

${NAME}:			${OBJS_PUSH_SWAP}
					@gcc -o ${NAME} ${OBJS_PUSH_SWAP} ${SANIFLAG}
					@printf "\n\e[32;3m$@ successfully build\e[0m\n"
			

clean:
					@rm -f ${OBJS_PUSH_SWAP}
					@printf "\e[31;3mClean files\e[0m\n"

fclean:				clean
					@rm -f ${NAME}
					@printf "\e[31;3mClean exec\e[0m\n"

re:					fclean all

.PHONY:		all clean fclean re 
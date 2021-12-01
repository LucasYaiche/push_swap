#=======================================#
#[PUSH_SWAP] Fonctions partie principale#
#=======================================#

SRC_PUSH_SWAP = 
OBJS_PUSH_SWAP = ${SRC_PUSH_SWAP:.c=.o}

#====#
#Tags#
#====#

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SANIFLAG = -fsanitize=adress -g

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
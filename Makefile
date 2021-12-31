#=======================================#
#[PUSH_SWAP] Fonctions partie principale#
#=======================================#

SRC_PUSH_SWAP = check_argv.c fill_tab.c ft_atoi.c ft_calloc.c find_biggest.c\
				ft_free.c ft_isdigit.c ft_putstr.c ft_strlen.c push_swap.c \
				red_button.c ft_strncmp.c input_error.c lowest_cases.c up.c \
				down.c sort.c moves.c issort.c find_lowest.c ft_putstr_error.c \
				ft_radixsort.c create_indexlist.c end.c

OBJS_PUSH_SWAP =${addprefix ${OBJDIR}/, ${SRC_PUSH_SWAP:.c=.o}}

#====#
#Tags#
#====#

OBJDIR = objs
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SANIFLAG = -fsanitize=address -g

#=========#
#Commandes#
#=========#
# .c.o:
# 					@gcc ${CFLAGS} -c $< -o ${<:.c=.o}
# 					@printf "\e[32;3m.\e[0m"
					

${OBJDIR}/%.o : %.c
					@gcc ${CFLAGS} -c $< -o ${addprefix ${OBJDIR}/, ${<:.c=.o}}

all:				${NAME}

${NAME}:			${OBJS_PUSH_SWAP}
					@gcc -o ${NAME} ${OBJS_PUSH_SWAP} ${SANIFLAG}
					@printf "\n\e[32;3m$@ successfully build\e[0m\n"
			
${OBJS_PUSH_SWAP}:	${OBJDIR}

${OBJDIR}:			
					@mkdir ${OBJDIR}
clean:
					@rm -f ${OBJS_PUSH_SWAP}
					@rm -r ${OBJDIR}
					@printf "\e[31;3mClean files\e[0m\n"

fclean:				clean
					@rm -f ${NAME}
					@printf "\e[31;3mClean exec\e[0m\n"

re:					fclean all

.PHONY:				all clean fclean re 
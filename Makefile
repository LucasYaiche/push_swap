#=======================================#
#[PUSH_SWAP] Fonctions partie principale#
#=======================================#

PUSH_SWAP_SRC = push_swap.c

COMMON_SRC = check_argv.c fill_tab.c ft_atoi.c ft_calloc.c find_biggest.c\
				ft_free.c ft_isdigit.c ft_putstr.c ft_strlen.c \
				panic_button.c ft_strncmp.c input_error.c lowest_cases.c up.c \
				down.c sort.c moves1.c moves2.c moves3.c issort.c find_lowest.c  \
				ft_radixsort.c create_indexlist.c end.c ft_putstr_error.c isdouble.c \
				
COMMON_OBJ = ${addprefix ${OBJDIR}, ${COMMON_SRC:%.c=%.o}}

PUSH_SWAP_OBJ = ${addprefix ${OBJDIR}, ${PUSH_SWAP_SRC:%.c=%.o}} ${COMMON_OBJ}
#==================================#
#[PUSH_SWAP] Fonctions partie bonus#
#==================================#

PUSH_SWAP_BONUS_SRC = 	check_move_bonus.c checker_bonus.c sort_tab_bonus.c  moves1_bonus.c \
						moves2_bonus.c moves3_bonus.c get_next_line_utils_bonus.c \
						get_next_line_bonus.c clean_bonus.c
						
PUSH_SWAP_BONUS_OBJ = ${addprefix ${OBJDIR}, ${PUSH_SWAP_BONUS_SRC:%.c=%.o}} ${COMMON_OBJ}

#====#
#Tags#
#====#

OBJDIR = ./objs/
CHECKDIR = ./checker_bonus/
SRCDIR = ./src/
COMMONDIR = ./common/
INCLUDES = ./includes/
NAME = push_swap
CHECKNAME = checker
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=${BUFFER_SIZE} ${SANIFLAG}
SANIFLAG = -fsanitize=address -g
BUFFER_SIZE = 1000


#=========#
#Commandes#
#=========#					

${OBJDIR}%.o : ${SRCDIR}%.c
								@gcc ${CFLAGS} -c $< -o $@ -I ${INCLUDES}
${OBJDIR}%.o : ${CHECKDIR}%.c
								@gcc ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${OBJDIR}%.o : ${COMMONDIR}%.c
								@gcc ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${NAME}: 						${OBJDIR} ${PUSH_SWAP_OBJ}
								@gcc ${CFLAGS} ${PUSH_SWAP_OBJ} -o ${NAME}
								@printf "\e[32;3m$@ successfully build\e[0m\n"

${CHECKNAME}:					${OBJDIR} ${PUSH_SWAP_BONUS_OBJ}
								@gcc ${CFLAGS} ${PUSH_SWAP_BONUS_OBJ} -o ${CHECKNAME}
								@printf "\e[32;3m$@ successfully build\e[0m\n"
${OBJDIR}:						
								@mkdir -p ${OBJDIR}

all:							${NAME}
								
bonus:							${CHECKNAME}

clean:
								@rm -rf ${OBJDIR}
								@printf "\e[31;3mClean files\e[0m\n"

fclean:							clean
								@rm -f ${NAME}
								@rm -f ${CHECKNAME}
								@printf "\e[31;3mClean exec\e[0m\n"

re:								fclean all

.PHONY:							all clean fclean re bonus
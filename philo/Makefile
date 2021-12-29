	# Library Name #
NAME	= 	philo

	# Compilator #
COMPILER	= 	clang

	# Variables #
SRCS		= 	chaos_theory.c \
				errare_humanum_est.c \
				express_eat_for_capitalism.c \
				hegemonic_view.c \
				men_condemned_to_be_free.c \
				mutex_and_solidarite.c \
				philo.c \
				sein_und_zeit.c \
				the_belly_of_the_philosophers.c \
				the_problem_of_genesis_in_husserls_philosophy.c \
				utils.c \
				utils2.c 

INCLUDES 	= 	includes/philo.h

	# Colors Foreground #
DEFAULT		=	\033[0;39m
BLACK		=	\033[0;30m
RED			=	\033[0;31m
RED_B		=	\033[1;31m
L_RED		=	\033[0;91m
GREEN		=	\033[0;32m
GREEN_B		=	\033[1;32m
L_GREEN		=	\033[0;92m
YELLOW		=	\033[0;33m
L_YELLOW	=	\033[0;93m
BLUE		=   \033[0;34m
BLUE_B		=	\033[1;34m
L_BLUE		=   \033[0;94m
PINK		=	\033[0;35m
L_PINK		=	\033[0;95m
SKY			=   \033[0;36m
SKY_B		=	\033[1;36m
L_CYAN		=   \033[0;96m
GREY		=	\033[0;37m
D_GREY		=	\033[0;90m
WHITE		=	\033[0;97m
RESET		=	\e[0m

	# Colors Background #
NOIR		=	\033[0;40m
ROUGE		=	\033[0;41m
L_ROUGE		=	\033[0;101m
VERT		=	\033[0;42m
L_VERT		=	\033[0;102m
JAUNE		=	\033[0;43m
L_JAUNE		=	\033[0;103m
BLEU		=	\033[0;44m
L_BLEU		=	\033[0;104m
ROSE		=	\033[0;45m
L_ROSE		=	\033[0;105m
CYAN		=	\033[0;46m
L_CYAN		=	\033[0;106m
GRIS		=	\033[0;100m
BLANC		=	\033[0;107m

	# Objects #
OBJS	= ${SRCS:.c=.o}
OBJS	:= $(addprefix objs/,${OBJS})

	# Flags #

FLAGS	= 	-Wall -Werror -Wextra -pthread 
#-g3 -fsanitize=thread

	# Rules #
all:		${NAME}
			@printf "$(L_PINK)<3 <3 $(RESET)"
			@printf "$(RED_B)Manu le petit canard$(RESET)"
			@printf "$(L_PINK) <3 <3 \n$(RESET)"

$(NAME):	${OBJS} ${INCLUDES}
			${COMPILER} ${FLAGS} -I includes ${OBJS} -o $(NAME)
			@printf	"\n\n"
			@printf	"$(CYAN)                                                                                                                                      $(RESET)\n"
			@printf	"$(CYAN)                                                                                                                                      $(RESET)\n"
			@printf	"$(CYAN)                                                                                                                                      $(RESET)\n"
			@printf	"$(CYAN)                                                              $(RESET)$(NOIR)        $(RESET)$(CYAN)                                                                $(RESET)\n"
			@printf	"$(CYAN)                                                            $(RESET)$(NOIR)  $(RESET)$(BLANC)        $(RESET)$(NOIR)  $(RESET)$(CYAN)                                                              $(RESET)\n"
			@printf	"$(CYAN)                                                          $(RESET)$(NOIR)  $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(BLANC)      $(RESET)$(NOIR)  $(RESET)$(CYAN)                                                            $(RESET)\n"
			@printf "$(CYAN)                  $(RESET)$(NOIR)            $(RESET)$(CYAN)                            $(RESET)$(NOIR)  $(RESET)$(BLANC)          $(RESET)$(NOIR)    $(RESET)$(CYAN)                            $(RESET)$(NOIR)              $(RESET)$(CYAN)                  $(RESET)\n"
			@printf "$(CYAN)              $(RESET)$(NOIR)    $(RESET)$(JAUNE)            $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(NOIR)  $(RESET)$(BLANC)    $(RESET)$(NOIR)          $(RESET)$(CYAN)                          $(RESET)$(NOIR)                  $(RESET)$(CYAN)                $(RESET)\n"
			@printf "$(CYAN)            $(RESET)$(NOIR)  $(RESET)$(JAUNE)                  $(RESET)$(NOIR)  $(RESET)$(CYAN)                        $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)    $(RESET)$(BLANC)  $(RESET)$(NOIR)      $(RESET)$(CYAN)                        $(RESET)$(NOIR)                        $(RESET)$(CYAN)            $(RESET)\n"
			@printf "$(CYAN)          $(RESET)$(NOIR)  $(RESET)$(BLANC)        $(RESET)$(NOIR)      $(RESET)$(JAUNE)      $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(NOIR)            $(RESET)$(CYAN)                          $(RESET)$(NOIR)                        $(RESET)$(CYAN)            $(RESET)\n"
			@printf "$(CYAN)          $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)    $(RESET)$(BLANC)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)      $(RESET)$(JAUNE)  $(RESET)$(NOIR)      $(RESET)$(CYAN)                          $(RESET)$(NOIR)        $(RESET)$(CYAN)                            $(RESET)$(NOIR)      $(RESET)$(JAUNE)  $(RESET)$(NOIR)                $(RESET)$(CYAN)            $(RESET)\n"
			@printf "$(CYAN)        $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)  $(RESET)$(JAUNE)    $(RESET)$(BLANC)  $(RESET)$(JAUNE)  $(RESET)$(BLANC)      $(RESET)$(JAUNE)  $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(CYAN)                                                            $(RESET)$(NOIR)    $(RESET)$(BLANC)    $(RESET)$(JAUNE)  $(RESET)$(BLANC)      $(RESET)$(JAUNE)  $(RESET)$(NOIR)          $(RESET)$(CYAN)          $(RESET)\n"
			@printf "$(CYAN)        $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)  $(RESET)$(JAUNE)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)  $(RESET)$(BLANC)    $(RESET)$(JAUNE)  $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(CYAN)      $(RESET)$(GRIS)  $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(CYAN)                                            $(RESET)$(NOIR)    $(RESET)$(BLANC)    $(RESET)$(JAUNE)  $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)          $(RESET)$(CYAN)          $(RESET)\n"
			@printf "$(CYAN)        $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)    $(RESET)$(JAUNE)  $(RESET)$(NOIR)      $(RESET)$(CYAN)      $(RESET)$(GRIS)  $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(CYAN)                                            $(RESET)$(NOIR)        $(RESET)$(JAUNE)  $(RESET)$(NOIR)    $(RESET)$(JAUNE)      $(RESET)$(NOIR)          $(RESET)$(CYAN)        $(RESET)\n"
			@printf "$(CYAN)          $(RESET)$(NOIR)  $(RESET)$(BLANC)  $(RESET)$(NOIR)  $(RESET)$(BLANC)      $(RESET)$(NOIR)  $(RESET)$(JAUNE)            $(RESET)$(NOIR)  $(RESET)$(CYAN)    $(RESET)$(GRIS)          $(RESET)$(CYAN)                                          $(RESET)$(NOIR)    $(RESET)$(JAUNE)                    $(RESET)$(NOIR)        $(RESET)$(CYAN)        $(RESET)\n"	
			@printf	"$(CYAN)            $(RESET)$(NOIR)    $(RESET)$(BLANC)        $(RESET)$(NOIR)          $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(CYAN)      $(RESET)$(GRIS)  $(RESET)$(CYAN)              $(RESET)$(GRIS)          $(RESET)$(CYAN)                      $(RESET)$(GRIS)  $(RESET)$(JAUNE)    $(RESET)$(NOIR)          $(RESET)$(JAUNE)        $(RESET)$(GRIS)    $(RESET)$(NOIR)  $(RESET)$(CYAN)          $(RESET)\n"
			@printf "$(CYAN)        $(RESET)$(NOIR)    $(RESET)$(JAUNE)    $(RESET)$(NOIR)  $(RESET)$(BLANC)                    $(RESET)$(NOIR)  $(RESET)$(CYAN)      $(RESET)$(GRIS)  $(RESET)$(CYAN)              $(RESET)$(GRIS)  $(RESET)$(BLANC)      $(RESET)$(GRIS)  $(RESET)$(CYAN)                      $(RESET)$(GRIS)  $(RESET)$(JAUNE)                  $(RESET)$(BLANC)    $(RESET)$(GRIS)        $(RESET)$(CYAN)        $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)  $(RESET)$(JAUNE)        $(RESET)$(NOIR)  $(RESET)$(BLANC)                    $(RESET)$(NOIR)      $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(CYAN)              $(RESET)$(GRIS)  $(RESET)$(ROUGE)      $(RESET)$(GRIS)  $(RESET)$(CYAN)                        $(RESET)$(GRIS)  $(RESET)$(JAUNE)    $(RESET)$(NOIR)    $(RESET)$(JAUNE)    $(RESET)$(BLANC)      $(RESET)$(GRIS)  $(RESET)$(JAUNE)        $(RESET)$(GRIS)  $(RESET)$(CYAN)      $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)  $(RESET)$(JAUNE)      $(RESET)$(NOIR)      $(RESET)$(BLANC)                  $(RESET)$(NOIR)  $(RESET)$(JAUNE)    $(RESET)$(NOIR)  $(RESET)$(GRIS)  $(RESET)$(CYAN)                $(RESET)$(GRIS)  $(RESET)$(ROUGE)  $(RESET)$(GRIS)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(BLANC)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)  $(RESET)$(JAUNE)    $(RESET)$(BLANC)      $(RESET)$(NOIR)  $(RESET)$(GRIS)  $(RESET)$(JAUNE)        $(RESET)$(GRIS)  $(RESET)$(CYAN)      $(RESET)\n"
			@printf "$(CYAN)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)      $(RESET)$(NOIR)      $(RESET)$(BLANC)  $(RESET)$(NOIR)  $(RESET)$(BLANC)              $(RESET)$(NOIR)  $(RESET)$(JAUNE)        $(RESET)$(NOIR)  $(RESET)$(CYAN)                  $(RESET)$(GRIS)  $(RESET)$(CYAN)              $(RESET)$(ROUGE)  $(RESET)$(CYAN)          $(RESET)$(GRIS)  $(RESET)$(BLANC)      $(RESET)$(JAUNE)    $(RESET)$(BLANC)      $(RESET)$(NOIR)    $(RESET)$(GRIS)    $(RESET)$(JAUNE)        $(RESET)$(GRIS)  $(RESET)$(CYAN)    $(RESET)\n"
			@printf "$(CYAN)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)    $(RESET)$(NOIR)      $(RESET)$(BLANC)      $(RESET)$(NOIR)  $(RESET)$(BLANC)          $(RESET)$(NOIR)              $(RESET)$(CYAN)                  $(RESET)$(GRIS)  $(RESET)$(CYAN)            $(RESET)$(VERT)      $(RESET)$(ROUGE)  $(RESET)$(CYAN)      $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(BLANC)            $(RESET)$(NOIR)        $(RESET)$(GRIS)      $(RESET)$(JAUNE)    $(RESET)$(GRIS)  $(RESET)$(CYAN)    $(RESET)\n"
			@printf "$(CYAN)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)        $(RESET)$(NOIR)  $(RESET)$(BLANC)        $(RESET)$(NOIR)          $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(CYAN)                        $(RESET)$(GRIS)      $(RESET)$(CYAN)        $(RESET)$(GRIS)          $(RESET)$(CYAN)      $(RESET)$(GRIS)  $(RESET)$(NOIR)    $(RESET)$(BLANC)        $(RESET)$(NOIR)          $(RESET)$(GRIS)  $(RESET)$(JAUNE)        $(RESET)$(GRIS)  $(RESET)$(CYAN)    $(RESET)\n"
			@printf "$(CYAN)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)      $(RESET)$(NOIR)    $(RESET)$(BLANC)              $(RESET)$(NOIR)  $(RESET)$(BLANC)      $(RESET)$(NOIR)  $(RESET)$(CYAN)  $(RESET)$(GRIS)                                                  $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(NOIR)      $(RESET)$(GRIS)  $(RESET)$(NOIR)              $(RESET)$(GRIS)    $(RESET)$(JAUNE)      $(RESET)$(GRIS)  $(RESET)$(CYAN)    $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)  $(RESET)$(JAUNE)  $(RESET)$(NOIR)    $(RESET)$(BLANC)                $(RESET)$(NOIR)  $(RESET)$(BLANC)      $(RESET)$(NOIR)  $(RESET)$(CYAN)          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)          $(RESET)$(GRIS)  $(RESET)$(NOIR)      $(RESET)$(GRIS)  $(RESET)$(NOIR)                $(RESET)$(GRIS)    $(RESET)$(JAUNE)  $(RESET)$(GRIS)  $(RESET)$(CYAN)      $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)      $(RESET)$(BLANC)                $(RESET)$(NOIR)    $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(CYAN)            $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)          $(RESET)$(GRIS)    $(RESET)$(NOIR)    $(RESET)$(GRIS)      $(RESET)$(NOIR)              $(RESET)$(GRIS)      $(RESET)$(CYAN)      $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)  $(RESET)$(BLANC)                  $(RESET)$(NOIR)      $(RESET)$(BLANC)    $(RESET)$(NOIR)  $(RESET)$(CYAN)            $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)            $(RESET)$(GRIS)  $(RESET)$(NOIR)    $(RESET)$(GRIS)      $(RESET)$(NOIR)                  $(RESET)$(GRIS)  $(RESET)$(CYAN)      $(RESET)\n"
			@printf "$(CYAN)        $(RESET)$(NOIR)                            $(RESET)$(CYAN)              $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)            $(RESET)$(GRIS)                              $(RESET)$(CYAN)        $(RESET)\n"
			@printf "$(CYAN)        $(RESET)$(NOIR)  $(RESET)$(JAUNE)            $(RESET)$(NOIR)  $(RESET)$(CYAN)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)      $(RESET)$(NOIR)  $(RESET)$(CYAN)            $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)            $(RESET)$(NOIR)  $(RESET)$(JAUNE)      $(RESET)$(NOIR)  $(RESET)$(CYAN)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)            $(RESET)$(NOIR)  $(RESET)$(CYAN)        $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)                  $(RESET)$(CYAN)    $(RESET)$(NOIR)            $(RESET)$(CYAN)          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)                          $(RESET)$(GRIS)  $(RESET)$(NOIR)  $(RESET)$(CYAN)          $(RESET)$(NOIR)            $(RESET)$(CYAN)    $(RESET)$(NOIR)                  $(RESET)$(CYAN)      $(RESET)\n"
			@printf "$(CYAN)      $(RESET)$(NOIR)                  $(RESET)$(CYAN)    $(RESET)$(NOIR)            $(RESET)$(CYAN)          $(RESET)$(GRIS)  $(RESET)$(CYAN)                            $(RESET)$(GRIS)  $(RESET)$(CYAN)            $(RESET)$(NOIR)            $(RESET)$(CYAN)    $(RESET)$(NOIR)                  $(RESET)$(CYAN)      $(RESET)\n"
			@printf	"\n\n"
			@printf "$(BLUE_B)L'art de la philosophie ne vaut que s'il est un art de la guerre... $(RESET)$(SKY_B)Bernard Henry-Levy <3 \n\n$(RESET)"
			@printf "$(YELLOW)============$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)La vie passe, la moulinette trepasse !\n\n$(RESET)"

objs/%.o:		srcs/%.c
					@mkdir -p objs
					@${COMPILER} ${FLAGS} -I includes -o $@ -c $< 

norme:		
			@norminette srcs/*
			@norminette includes/*
			@printf "$(YELLOW)\nLa normalité est une expérience plus extrême que ce que les gens veulent communément admettre.\n$(RESET)"
			@printf "$(YELLOW)============$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)La vie passe, la norminette trepasse !\n$(RESET)"

clean:
			rm -f ${OBJS}
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)===$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"
fclean:
			rm -f ${OBJS}
			rm -f ${NAME}
			rm -rf objs
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)===$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"

re:			fclean all
			@printf "$(YELLOW)\nAimer, désirer, c’est aussi souffrir, et être prêt à recommencer... \n$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			
.PHONY: 	all norme clean fclean re

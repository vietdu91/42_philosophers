/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:44:10 by emtran            #+#    #+#             */
/*   Updated: 2021/12/19 12:08:10 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <string.h> 
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>
# include <limits.h>

# define ERR_ARG "\n\033[1;31mERROR\e[0m - \033[0;34mIn philosophy, it is better \
to know many of the authors' arguments than to quote them by heart\e[0m\nBad \
number of arguments...\n\n"
# define ERR_NBR "\n\033[1;31mERROR\e[0m - \033[0;34mLes hommes sont comme les \
chiffres, ils n'acquièrent de la valeur que par leur position.\e[0m\nOne \
or more arguments are not numbers...\n\n"
# define ERR_PHILO "\n\033[1;31mERROR\e[0m - \033[0;34mRenoncer à l’abondance, \
sans renoncer à la liberté.\e[0m\nThere are too many or not enough philosophers \
at the table!...\n\n"
# define ERR_TIME "\n\033[1;31mERROR\e[0m - \033[0;34mSi personne ne me demande \
ce qu’est le temps, je sais ce qu’il est ; si on me le demande et que je veuille \
l’expliquer, je ne le sais plus\e[0m\nThere is not enough or too much time in the \
indicated arguments...\n\n"
# define ERR_MALLOC "\n\033[1;31mERROR\e[0m - \033[0;34mBy attribute, I mean \
that which the intellect perceives as constituting the essence of substance. \
\e[0m\nThere is a problem of memory allocation...\n\n"
# define ERR_THREAD "\n\033[1;31mERROR\e[0m - \033[0;34mQui court deux lièvres \
à la fois n’en prend aucun.\e[0m\nThere is a problem in creating a thread...\n\n"
# define ERR_NB_EAT "\n\033[1;31mERROR\e[0m - \033[0;34mPas d'artifice en cuisine \
pour déguiser une nourriture sans goût.\e[0m\nThere is nothing on the table...\n\n"

typedef struct s_bac
{
	int				nb_args;
	int				nb_philo;
	int				nb_end;
	long int		time_to_die;
	long int		time_to_eat;
	long int		time_to_sleep;
	int				nb_times_to_eat;
	long int		clock_start_sec;
	long int		clock_start_usec;
	int				alarm_to_stop;
	int				death;
	pthread_mutex_t	*fork_mutex;
	pthread_mutex_t	blabla_mutex;
	pthread_mutex_t	miam_time_mutex;
	pthread_mutex_t	death_mutex;
	pthread_mutex_t	end;
}	t_bac;

typedef struct s_philo
{
	int				sujet;
	pthread_t		philo;
	pthread_t		death_meditation;
	int				left_fork;
	int				right_fork;
	long int		last_time_to_eat;
	int				check_nb_eat;
	int				end_philo;
	struct s_bac	*bac;
}	t_philo;

/*      PHILO.C        	
		Principal Main	*/

int				table_setting(t_bac *bac, t_philo **philo);
int				nothing_is_created_everything_is_transformed(t_bac *bac, \
t_philo **philo);
int				dialogues_of_plato(t_bac *bac, t_philo **philo, char **argv, \
int argc);
int				translatio_studorium(t_bac *bac, t_philo **philo, char **argv, \
int argc);

/*      ERRARE_HUMANUM_EST.C    
		Error management	*/

void			learn_by_making_mistakes(int way, t_philo *philo, int nb_philo);
void			learn_by_making_deception(int way);
int				check_str_nb(char *str);
int				speech_and_phenomena(t_bac *bac, int argc, char **argv);

/*		MEN_CONDEMNED_TO_BE_FREE.C		
		Malloc and free	*/

void			being_and_nothingness(t_philo **philo, t_bac *bac, int \
nb_philo);

/*		MUTEX_AND_SOLIDARITE.C		
		Mutex management	*/

int				init_mutex(t_bac *bac, char **argv);
void			destroy_mutex(t_philo **t_philo, t_bac *bac);

/*		EXPRESS_EAT_FOR_CAPITALISM	
		Fifth argument management	*/

void			a_la_bonne_franquette(t_bac *bac, char **argv);
int				no_meal_no_deal(t_bac *bac, t_philo **philo, char **argv);
int				satiated_meaning(t_philo *philo);
void			nap_is_reappropriation_of_self(t_bac *bac);

/*		THE_PROBLEM_OF_GENESIS_IN_HUSSERLS_PHILOSOPHY.C		
		Initialisation	*/

int				back_to_birth(t_bac *bac, t_philo **philo, char **argv);
int				back_to_philo(t_bac *bac, t_philo **philo, char **argv);
int				logocentrism(t_philo **philo, t_bac *bac);
int				essay_on_the_philosophical_data_of_management(t_bac *bac, \
char **argv);

/*      SEIN_UND_ZEIT.C     
		Time management	*/

long int		in_der_welt_sein(t_bac *bac, struct timeval *end);
long int		gefragte_und_dasein(t_bac *bac);
void			die_gewesendheit(t_bac *bac);
void			stimme_des_gewissens(t_bac *bac);
void			ft_usleep(long int time, t_bac *bac);

/*		CHAOS_THEORY.C
		Check stop threads management	*/

int				become_a_friend_of_death(t_philo *philo, int redemption);
int				become_a_friend_with_satan(t_bac *bac);
int				long_life_lucifer(t_bac *bac);
int				vade_retro_satana(t_bac *bac);
int				liberate_me_ex_inferis(t_philo *philo);

/*		THE_BELLY_OF_THE_PHILOSOPHERS.C		
		Threads management	*/

void			la_fourcheeeeeeeeettttttteeeeee(t_philo *philo, int left, \
int right);
void			le_philosophe_aux_epinards(t_philo *philo, int left, int right);
void			pure_intellectual_masturbation(t_philo *philo);
void			*god_is_dead(void *nietzsche);
void			*people_are_what_they_eat(void *kant);

/*		HEGEMONIC_VIEW.C		
		Affichage management	*/

void			epicure(void);
void			mein_beruf_ist_politische_theorie(t_philo *philo, int way);
void			in_articulo_mortis(t_philo *philo);

/*      UTILS.C         
		All are in in the title */

void			ft_putchar(char c, int fd);
int				ft_strlen(char *str);
void			ft_putnbr(int nb, int fd);
void			ft_putstr(char *str, int fd);
int				ft_nbrlen(int n);
long int		ft_atoi(const char *str);
#endif
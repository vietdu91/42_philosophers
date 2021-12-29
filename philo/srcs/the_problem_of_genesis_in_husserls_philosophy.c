/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_problem_of_genesis_in_husserls_philosop        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:05:43 by emtran            #+#    #+#             */
/*   Updated: 2021/12/12 12:20:18 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	Initialiation variables of structure table for each philo */

int	back_to_philo(t_bac *bac, t_philo **philo, char **argv)
{
	int	i;

	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		philo[i] = malloc(sizeof(t_philo));
		if (!philo[i])
		{
			ft_putstr(ERR_MALLOC, 1);
			return (1);
		}
		philo[i]->sujet = 0;
		philo[i]->philo = 0;
		philo[i]->death_meditation = 0;
		philo[i]->left_fork = 0;
		philo[i]->right_fork = 0;
		philo[i]->last_time_to_eat = 0;
		philo[i]->check_nb_eat = 0;
		philo[i]->end_philo = 0;
		philo[i]->bac = bac;
		i++;
	}
	return (0);
}

/*	Initialisation variables of structure of bac of philo !
	C'EST IMPORTANT LE BAC DE PHILOOOOO ! DISSERTATION EN PERTE !	*/

int	back_to_birth(t_bac *bac, t_philo **philo, char **argv)
{
	bac->nb_args = 0;
	bac->nb_philo = 0;
	bac->nb_end = 0;
	bac->time_to_die = 0;
	bac->time_to_eat = 0;
	bac->time_to_sleep = 0;
	bac->nb_times_to_eat = 0;
	bac->clock_start_sec = 0;
	bac->clock_start_usec = 0;
	bac->death = 0;
	bac->alarm_to_stop = 0;
	if (back_to_philo(bac, philo, argv) == -1)
		return (1);
	return (0);
}

/*	Allocation of each range for each philosopher	*/

int	logocentrism(t_philo **philo, t_bac *bac)
{
	int	i;

	i = 0;
	while (i < bac->nb_philo)
	{
		philo[i]->left_fork = i;
		philo[i]->right_fork = (i + 1) % bac->nb_philo;
		i++;
	}
	return (0);
}

/*	Assignment and error handling for argv values in the structure */

int	essay_on_the_philosophical_data_of_management(t_bac *bac, char **argv)
{
	bac->nb_philo = ft_atoi(argv[1]);
	if (bac->nb_philo > 200 || bac->nb_philo < 1)
	{
		learn_by_making_deception(3);
		return (1);
	}
	bac->time_to_die = ft_atoi(argv[2]);
	bac->time_to_eat = ft_atoi(argv[3]);
	bac->time_to_sleep = ft_atoi(argv[4]);
	if (bac->time_to_die <= 0 || bac->time_to_eat <= 0 || \
	bac->time_to_sleep <= 0 || bac->time_to_die > INT_MAX || \
	bac->time_to_eat > INT_MAX || bac->time_to_sleep > INT_MAX)
	{
		learn_by_making_deception(4);
		return (1);
	}
	return (0);
}

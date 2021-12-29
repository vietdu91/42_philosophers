/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   express_eat_for_capitalism.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 09:53:33 by emtran            #+#    #+#             */
/*   Updated: 2021/12/19 12:27:30 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	Put the number of the fifth argument in the structure */

void	a_la_bonne_franquette(t_bac *bac, char **argv)
{
	if (bac->nb_args == 6)
		bac->nb_times_to_eat = ft_atoi(argv[5]);
	else
		bac->nb_times_to_eat = -1;
}

/*	Exits the program if the user admits 0 as the fifth argument */

int	no_meal_no_deal(t_bac *bac, t_philo **philo, char **argv)
{
	if (bac->nb_args == 6 && bac->nb_times_to_eat == 0)
	{
		being_and_nothingness(philo, bac, ft_atoi(argv[1]));
		return (1);
	}
	return (0);
}

/*	The function checks whether each philosopher has enough food 
according to the number of the fifth argument	*/

int	satiated_meaning(t_philo *philo)
{
	if (philo->check_nb_eat == philo->bac->nb_times_to_eat)
	{
		pthread_mutex_lock(&philo->bac->end);
		philo->end_philo = 1;
		philo->bac->nb_end++;
		if (philo->bac->nb_end == philo->bac->nb_philo)
		{
			pthread_mutex_unlock(&philo->bac->end);
			become_a_friend_of_death(philo, 2);
			return (1);
		}
		else
			pthread_mutex_unlock(&philo->bac->end);
	}
	return (0);
}

/*	Display of end of philosophers' meal according to the number of fifth 
argument	*/

void	nap_is_reappropriation_of_self(t_bac *bac)
{
	if (bac->alarm_to_stop == 2)
	{
		stimme_des_gewissens(bac);
		ft_putstr("| Each philosopher ate ", 1);
		ft_putnbr(bac->nb_times_to_eat, 1);
		ft_putstr(" time(s) 🍴 It's time to do la sieste 🛌💤 !\n", 1);
	}
}

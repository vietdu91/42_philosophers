/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chaos_theory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:44:59 by emtran            #+#    #+#             */
/*   Updated: 2021/12/17 15:27:57 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	The function sends an "alarm" to the variable alarm_to_stop to stop the 
program. If redemption == 1, it means that someone has died, if it is 2, it 
means that each philosopher has reached his meal count according to the fifth 
argument.*/

int	become_a_friend_of_death(t_philo *philo, int redemption)
{	
	pthread_mutex_lock(&philo->bac->blabla_mutex);
	if (redemption)
		philo->bac->alarm_to_stop = redemption;
	if (philo->bac->alarm_to_stop)
	{
		pthread_mutex_unlock(&philo->bac->blabla_mutex);
		return (1);
	}
	pthread_mutex_unlock(&philo->bac->blabla_mutex);
	return (0);
}

/* The function watches if the alarm to stop the program is active or not */

int	become_a_friend_with_satan(t_bac *bac)
{
	pthread_mutex_lock(&bac->blabla_mutex);
	if (bac->alarm_to_stop)
	{
		pthread_mutex_unlock(&bac->blabla_mutex);
		return (1);
	}
	pthread_mutex_unlock(&bac->blabla_mutex);
	return (0);
}

/*	The function watches if a philosopher is not finished its meal	*/

int	long_life_lucifer(t_bac *bac)
{
	pthread_mutex_lock(&bac->end);
	if (bac->nb_end)
	{
		pthread_mutex_unlock(&bac->end);
		return (1);
	}
	pthread_mutex_unlock(&bac->end);
	return (0);
}

/*	The function watches if a philosopher is dead or not	*/

int	vade_retro_satana(t_bac *bac)
{
	pthread_mutex_lock(&bac->blabla_mutex);
	if (bac->death)
	{
		pthread_mutex_unlock(&bac->blabla_mutex);
		return (1);
	}
	pthread_mutex_unlock(&bac->blabla_mutex);
	return (0);
}

/*	There is a death on the table...	*/

int	liberate_me_ex_inferis(t_philo *philo)
{
	pthread_mutex_lock(&philo->bac->miam_time_mutex);
	if ((gefragte_und_dasein(philo->bac) - philo->last_time_to_eat) >= \
		philo->bac->time_to_die)
	{
		pthread_mutex_unlock(&philo->bac->miam_time_mutex);
		return (0);
	}
	pthread_mutex_unlock(&philo->bac->miam_time_mutex);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_belly_of_the_philosophers.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:46:16 by emtran            #+#    #+#             */
/*   Updated: 2021/12/17 16:22:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	Mutex management for forks */

void	la_fourcheeeeeeeeettttttteeeeee(t_philo *philo, int left, int right)
{
	if (philo->sujet % 2 == 0)
		pthread_mutex_lock(&philo->bac->fork_mutex[left]);
	else
		pthread_mutex_lock(&philo->bac->fork_mutex[right]);
	pthread_mutex_lock(&philo->bac->blabla_mutex);
	if (!philo->bac->alarm_to_stop)
		mein_beruf_ist_politische_theorie(philo, 2);
	pthread_mutex_unlock(&philo->bac->blabla_mutex);
	if (philo->bac->nb_philo == 1)
		return ;
	if (philo->sujet % 2 == 0)
		pthread_mutex_lock(&philo->bac->fork_mutex[right]);
	else
		pthread_mutex_lock(&philo->bac->fork_mutex[left]);
	pthread_mutex_lock(&philo->bac->blabla_mutex);
	if (!philo->bac->alarm_to_stop)
		mein_beruf_ist_politische_theorie(philo, 3);
	pthread_mutex_unlock(&philo->bac->blabla_mutex);
}

/*	Mutex management for eating time	*/

void	le_philosophe_aux_epinards(t_philo *philo, int left, int right)
{
	pthread_mutex_lock(&philo->bac->blabla_mutex);
	if (!philo->bac->alarm_to_stop)
		mein_beruf_ist_politische_theorie(philo, 4);
	if (philo->bac->nb_times_to_eat)
		philo->check_nb_eat++;
	pthread_mutex_unlock(&philo->bac->blabla_mutex);
	pthread_mutex_lock(&philo->bac->miam_time_mutex);
	philo->last_time_to_eat = gefragte_und_dasein(philo->bac);
	pthread_mutex_unlock(&philo->bac->miam_time_mutex);
	ft_usleep(philo->bac->time_to_eat, philo->bac);
	pthread_mutex_unlock(&philo->bac->fork_mutex[right]);
	pthread_mutex_unlock(&philo->bac->fork_mutex[left]);
}

/*	Mutex management for sleeping and thinking time	*/

void	pure_intellectual_masturbation(t_philo *philo)
{
	pthread_mutex_lock(&philo->bac->blabla_mutex);
	if (!philo->bac->alarm_to_stop)
		mein_beruf_ist_politische_theorie(philo, 5);
	pthread_mutex_unlock(&philo->bac->blabla_mutex);
	ft_usleep(philo->bac->time_to_sleep, philo->bac);
	pthread_mutex_lock(&philo->bac->blabla_mutex);
	if (!philo->bac->alarm_to_stop)
		mein_beruf_ist_politische_theorie(philo, 6);
	pthread_mutex_unlock(&philo->bac->blabla_mutex);
}

/*	Thread of death management */

void	*god_is_dead(void *nietzsche)
{
	t_philo	*philo;

	philo = nietzsche;
	while (!long_life_lucifer(philo->bac))
	{
		if (!liberate_me_ex_inferis(philo) && \
		!become_a_friend_of_death(philo, 0))
		{
			pthread_mutex_lock(&philo->bac->blabla_mutex);
			philo->bac->death++;
			pthread_mutex_unlock(&philo->bac->blabla_mutex);
			become_a_friend_of_death(philo, 1);
			in_articulo_mortis(philo);
			pthread_mutex_lock(&philo->bac->end);
			philo->bac->nb_end++;
			pthread_mutex_unlock(&philo->bac->end);
			return (NULL);
		}
	}
	return (NULL);
}

/*	Thread of each philosopher management */

void	*people_are_what_they_eat(void *kant)
{
	t_philo	*philo;
	int		left;
	int		right;

	philo = kant;
	if (philo->sujet % 2 == 0)
		ft_usleep(50, philo->bac);
	left = philo->left_fork;
	right = philo->right_fork;
	while (!become_a_friend_of_death(philo, 0) && !philo->end_philo \
	&& !vade_retro_satana(philo->bac))
	{
		if (philo->sujet % 2 == 0 && philo->bac->nb_philo % 2 != 0)
			ft_usleep(50, philo->bac);
		la_fourcheeeeeeeeettttttteeeeee(philo, left, right);
		if (philo->bac->nb_philo == 1)
			return (NULL);
		le_philosophe_aux_epinards(philo, left, right);
		if (satiated_meaning(philo))
			return (NULL);
		pure_intellectual_masturbation(philo);
	}
	return (NULL);
}

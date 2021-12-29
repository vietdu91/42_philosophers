/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex_and_solidarite.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:19:12 by emtran            #+#    #+#             */
/*   Updated: 2021/12/17 16:30:11 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	Initialisation of mutex :
		- Fork_mutex = to prevent philosophers from arguing and putting forks 
		to their palms ;
		- Blabla_mutex = to avoid philosophers talking at the same time on 
		the terminal ;
		- Miam_time_mutex = to manage the grail time of each philosopher ;
		- Death_mutex = to manage the death status of each philosopher ;
		- End_mutex = how to manage the end of the philosophers' lunch ; */

int	init_mutex(t_bac *bac, char **argv)
{
	int	i;

	pthread_mutex_init(&bac->blabla_mutex, NULL);
	pthread_mutex_init(&bac->miam_time_mutex, NULL);
	pthread_mutex_init(&bac->end, NULL);
	pthread_mutex_init(&bac->death_mutex, NULL);
	bac->fork_mutex = malloc(sizeof(pthread_mutex_t) * ft_atoi(argv[1]));
	if (!bac->fork_mutex)
	{
		ft_putstr(ERR_MALLOC, 1);
		return (1);
	}
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		pthread_mutex_init(&bac->fork_mutex[i], NULL);
		i++;
	}
	return (0);
}

/* Destruction of mutex ! BOOOOOOOOOOOOM SPITCHHHHHHH ! */

void	destroy_mutex(t_philo **philo, t_bac *bac)
{
	int	i;

	pthread_mutex_destroy(&bac->blabla_mutex);
	pthread_mutex_destroy(&bac->miam_time_mutex);
	pthread_mutex_destroy(&bac->death_mutex);
	pthread_mutex_destroy(&bac->end);
	i = 0;
	while (i < bac->nb_philo)
	{
		pthread_mutex_destroy(philo[i]->bac->fork_mutex);
		i++;
	}
}

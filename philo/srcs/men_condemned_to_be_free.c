/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   men_condemned_to_be_free.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:00:28 by emtran            #+#    #+#             */
/*   Updated: 2021/12/12 12:11:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	FREEEEEEEEEEEEEEEEEEEEEEEEEEEEDOOOOOOOOOOOOOOOOOOOOOOMMMM */

void	being_and_nothingness(t_philo **philo, t_bac *bac, int nb_philo)
{
	int	i;

	i = 0;
	free(bac->fork_mutex);
	while (i < nb_philo)
	{
		free(philo[i]);
		i++;
	}
	free(philo);
}

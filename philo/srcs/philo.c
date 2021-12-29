/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:44:27 by emtran            #+#    #+#             */
/*   Updated: 2021/12/17 16:30:34 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*	Creation of threads ! IT'S PHILOSOPHICAL PARTY FOOD TIME BABY !!!!! */

int	table_setting(t_bac *bac, t_philo **philo)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (i < bac->nb_philo)
	{
		philo[i]->sujet = i + 1;
		ret = pthread_create(&philo[i]->philo, NULL, people_are_what_they_eat, \
		philo[i]);
		if (ret)
		{
			learn_by_making_mistakes(1, *philo, bac->nb_philo);
			return (1);
		}
		ret = pthread_create(&philo[i]->death_meditation, NULL, god_is_dead, \
		philo[i]);
		if (ret)
		{
			learn_by_making_mistakes(1, *philo, bac->nb_philo);
			return (1);
		}
		i++;
	}
	return (0);
}

/*	The philosophers' table and the treatment of threads	*/

int	nothing_is_created_everything_is_transformed(t_bac *bac, \
t_philo **philo)
{
	int	i;

	epicure();
	if (table_setting(bac, philo))
		return (1);
	i = 0;
	while (!become_a_friend_with_satan(bac))
		ft_usleep(1, bac);
	while (i < bac->nb_philo)
	{
		pthread_join(philo[i]->philo, NULL);
		pthread_join(philo[i]->death_meditation, NULL);
		i++;
	}
	destroy_mutex(philo, bac);
	nap_is_reappropriation_of_self(bac);
	return (0);
}

/*	Initialization of variables */

int	dialogues_of_plato(t_bac *bac, t_philo **philo, char **argv, int argc)
{
	if (back_to_birth(bac, philo, argv))
	{
		ft_putstr(ERR_MALLOC, 1);
		return (1);
	}
	if (speech_and_phenomena(bac, argc, argv))
	{
		being_and_nothingness(philo, bac, ft_atoi(argv[1]));
		return (1);
	}
	return (0);
}

/*	Suite of main */

int	translatio_studorium(t_bac *bac, t_philo **philo, char **argv, int argc)
{
	if (dialogues_of_plato(bac, philo, argv, argc))
		return (1);
	die_gewesendheit(bac);
	if (no_meal_no_deal(bac, philo, argv))
	{
		learn_by_making_deception(5);
		return (1);
	}
	logocentrism(philo, bac);
	if (nothing_is_created_everything_is_transformed(bac, philo))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_bac	bac;
	t_philo	**philo;

	philo = NULL;
	if (argc == 5 || argc == 6)
	{
		if (init_mutex(&bac, argv))
			return (-1);
		philo = malloc(sizeof(t_philo *) * ft_atoi(argv[1]));
		if (!philo)
		{
			ft_putstr(ERR_MALLOC, 1);
			return (-1);
		}
		if (translatio_studorium(&bac, philo, argv, argc))
			return (-1);
	}
	else
	{
		ft_putstr(ERR_ARG, 2);
		return (-1);
	}
	being_and_nothingness(philo, &bac, ft_atoi(argv[1]));
	return (0);
}

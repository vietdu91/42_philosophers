/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errare_humanum_est.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:56:03 by emtran            #+#    #+#             */
/*   Updated: 2021/12/14 15:02:34 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	learn_by_making_mistakes(int way, t_philo *philo, int nb_philo)
{
	if (way == 1)
		ft_putstr(ERR_THREAD, 2);
	being_and_nothingness(&philo, philo->bac, nb_philo);
}

void	learn_by_making_deception(int way)
{
	if (way == 2)
		ft_putstr(ERR_NBR, 2);
	if (way == 3)
		ft_putstr(ERR_PHILO, 2);
	if (way == 4)
		ft_putstr(ERR_TIME, 2);
	if (way == 5)
		ft_putstr(ERR_NB_EAT, 2);
}

int	check_str_nb(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/*	The function checks if the arguments are numbers */

int	speech_and_phenomena(t_bac *bac, int argc, char **argv)
{
	int	i;

	i = 1;
	bac->nb_args = argc;
	while (i < argc)
	{
		if (check_str_nb(argv[i]) == 1)
		{
			learn_by_making_deception(2);
			return (1);
		}
		i++;
	}
	if (essay_on_the_philosophical_data_of_management(bac, argv))
		return (1);
	a_la_bonne_franquette(bac, argv);
	return (0);
}

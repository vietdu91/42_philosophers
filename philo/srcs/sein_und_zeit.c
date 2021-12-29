/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sein_und_zeit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:32:38 by emtran            #+#    #+#             */
/*   Updated: 2021/12/17 16:08:32 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

/*		READ MARTIN HEIDEGGER TO UNDERSTAND THESE FUNCTIONS !!!!!!!!!	*/

/*	Calculates the difference between the end gettime and the start gettime */
/*
long int	in_der_welt_sein(t_bac *bac, struct timeval *end)
{


	sec = end->tv_sec - bac->clock_start_sec;
	msec = end->tv_usec - bac->clock_start_usec;
	return ((sec * 1000) + (msec / 1000));
}*/

/*	Puts actual time	*/

long int	gefragte_und_dasein(t_bac *bac)
{
	struct timeval	end;
	long int		sec;
	long int		msec;

	gettimeofday(&end, NULL);
	sec = end.tv_sec - bac->clock_start_sec;
	msec = end.tv_usec - bac->clock_start_usec;
	return ((sec * 1000) + (msec / 1000));
}

/*	Records the start time to subtract it later with gettimeofday of the end */

void	die_gewesendheit(t_bac *bac)
{
	struct timeval	start;

	gettimeofday(&start, NULL);
	bac->clock_start_sec = start.tv_sec;
	bac->clock_start_usec = start.tv_usec;
}

/*	Prints the time... TIC TAC TIC TAC TIC TAC TIC TAC */

void	stimme_des_gewissens(t_bac *bac)
{
	int			i;
	long int	time;

	i = 0;
	time = gefragte_und_dasein(bac);
	ft_putstr("\033[0;36m", 1);
	ft_putnbr(time, 1);
	ft_putstr(" ms\e[0m", 1);
	while (i++ < 8 - ft_nbrlen(time) + 3)
		ft_putchar(' ', 1);
}

/*	My own usleep function because nothing is better than home-made */

void	ft_usleep(long int time, t_bac *bac)
{
	long int		start;

	start = 0;
	start = gefragte_und_dasein(bac);
	while (1)
	{
		if (vade_retro_satana(bac))
			return ;
		if (gefragte_und_dasein(bac) - start >= time)
			return ;
		usleep(50);
	}
}

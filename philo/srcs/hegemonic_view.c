/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hegemonic_view.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:48:57 by emtran            #+#    #+#             */
/*   Updated: 2021/12/12 18:12:01 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	epicure(void)
{
	ft_putstr("\n\033[0;32m   \\ \e[0m\n", 1);
	ft_putstr("\033[0;35m  ()()\e[0m\n", 1);
	ft_putstr("\033[0;35m ()()()\e[0m\033[0;33m Dis-moi ce que tu manges,", 1);
	ft_putstr(" je te dirai qui tu es...\e[0m\n", 1);
	ft_putstr("\033[0;35m  ()()\e[0m\n", 1);
	ft_putstr("\033[0;35m   ()\e[0m\n", 1);
	ft_putstr("\033[0;33m==================================================", 1);
	ft_putstr("========\e[0m\n", 1);
}

/*	Write status of philosopher	*/

void	mein_beruf_ist_politische_theorie(t_philo *philo, int way)
{
	stimme_des_gewissens(philo->bac);
	ft_putstr("\033[0;33m| \e[0m", 1);
	ft_putstr("\033[0;97m", 1);
	ft_putnbr(philo->sujet, 1);
	ft_putstr("\e[0m", 1);
	if (way == 2)
		ft_putstr("\033[0;32m has taken a fork 🍴 !\e[0m\n", 1);
	if (way == 3)
		ft_putstr("\033[0;32m has taken an other fork 🍴 !\e[0m\n", 1);
	if (way == 4)
		ft_putstr("\033[0;33m is eating 🍔 !\e[0m\n", 1);
	if (way == 5)
		ft_putstr("\033[0;34m is sleeping 💤 !\e[0m\n", 1);
	if (way == 6)
		ft_putstr("\033[0;35m is thinking 🧠 !\e[0m\n", 1);
	if (way == 666)
		ft_putstr("\033[1;31m died 💀 !\e[0m\n", 1);
}

void	in_articulo_mortis(t_philo *philo)
{
	if (!long_life_lucifer(philo->bac))
	{
		pthread_mutex_lock(&philo->bac->blabla_mutex);
		mein_beruf_ist_politische_theorie(philo, 666);
		pthread_mutex_unlock(&philo->bac->blabla_mutex);
	}
}

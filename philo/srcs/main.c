/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:10:11 by tsoares-          #+#    #+#             */
/*   Updated: 2024/05/31 19:48:04 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	main(int argc, char **argv)
{
	// check if the correct nbr of arguments were provided -> count with the nbr of meals
	// parse the args
	// init philos and forks
	if (argc != 5 && argc != 6)
	{
		printf("Usage: %s number_of_philosophers time_to_die"
			"time_to_eat time_to_sleep"
			"[number_of_times_each_philosopher_must_eat]\n",
			argv[0]);
		return (-1);
	}
	long	number_of_philosophers = str_to_long(argv[1]);
	long	time_to_die = str_to_long(argv[2]);
	long	time_to_eat = str_to_long(argv[3]);
	long	time_to_sleep = str_to_long(argv[4]);
	long	number_of_times_each_philosopher_must_eat = 0;
	if (argc == 6)
		number_of_times_each_philosopher_must_eat = str_to_long(argv[5]);
	printf("Nbr of philos............: %lu\n", number_of_philosophers);
	printf("Time to die..............: %lu\n", time_to_die);
	printf("Time to eat..............: %lu\n", time_to_eat);
	printf("Time to sleep............: %lu\n", time_to_sleep);
	printf("Times each philo must eat: %lu\n", number_of_times_each_philosopher_must_eat);
	return (0);
}

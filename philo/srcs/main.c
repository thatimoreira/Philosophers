/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:10:11 by tsoares-          #+#    #+#             */
/*   Updated: 2024/06/01 00:44:03 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	main(int argc, char **argv)
{
	// check if the correct nbr of arguments were provided -> count with the nbr of meals
	// parse the args
	// init philos and forks
	if (!validate_args(argc, argv))
		return (-1);
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

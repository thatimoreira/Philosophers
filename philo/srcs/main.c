/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:10:11 by tsoares-          #+#    #+#             */
/*   Updated: 2024/05/31 18:13:11 by tsoares-         ###   ########.fr       */
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
		printf("Usage: %s number_of_philosophers time_to_die
			time_to_eat time_to_sleep
			[number_of_times_each_philosopher_must_eat]\n",
			argv[0]);
		return (-1);
	}
	else
		printf("Makefile rules test OK!\n");
	return (0);
}

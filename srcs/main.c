/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:27:12 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/12 19:13:53 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

// init_simulation => nbr_forks == nbr_philo

// input: number_of_philosophers time_to_die time_to_eat time_to_sleep
// [number_of_times_each_philosopher_must_eat]
int	main(int argc, char **argv)
{
	t_table	table;

	if(is_valid_input(argc, argv, &table) == -1)
		exit (EXIT_FAILURE); // exit ou return ???
	return (0);
}

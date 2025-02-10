/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:27:12 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/10 15:49:20 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

// input: number_of_philosophers time_to_die time_to_eat time_to_sleep
// [number_of_times_each_philosopher_must_eat]
int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 5)
		printf("Success: mandatory number os params\n");
	else if (argc == 6)
		printf("Success: mandatory + optional number of paramenters\n");
	else if (argc == 0)
		printf("Error: no params\n");
	else if (argc < 5)
		printf("Error: too few arguments\n");
	else
		printf("Error: too many arguments\n");
	return (0);
}

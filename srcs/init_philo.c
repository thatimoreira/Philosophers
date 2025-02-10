/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:27:12 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/10 16:40:42 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

// input: number_of_philosophers time_to_die time_to_eat time_to_sleep
// [number_of_times_each_philosopher_must_eat]
int	main(int argc, char **argv)
{
	(void)argv;
	if (is_valid_input(argc - 1))
		print_return(STDOUT_FILENO,
				"\n\nVALID USER INPUT!!!\n\n", true, 26);
	else
		return (print_return(STDERR_FILENO, "\n\nINVALID USER INPUT\n\n", false, 22));
	return (0);
}

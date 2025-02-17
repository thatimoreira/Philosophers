/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:05:51 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/10 16:40:15 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

int	is_valid_input(int argc, char **argv, t_table *table)
{
	if (argc != 5 && argc != 6)
	{
		if (argc == 1)
			write(STDERR_FILENO, "Error: no parameters provided\n", 31);
		else if (argc < 5)
			write(STDERR_FILENO, "Error: too few parameters\n", 26);
		else
			write(STDERR_FILENO, "Error: too many parameters\n", 27);
		printf("Usage: nbr_philos  time_to_die time_to_eat time_to_sleep ");
		printf("[times_each_philo_must_eat]\n");
		return (-1);
	}
	if (!parse_args(argc, argv, table))
		return (-1);
	return (1);
}

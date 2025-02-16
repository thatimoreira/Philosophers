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

bool	ft_is_digit(int c)
{
	if (c >= '0' || c <= '9')
		return (true);
	return (false);
}

int	is_valid_input(int argc, char **argv, t_table *table)
{
	/*int	i;
	long	num;

	i = 0;
	num = 0;*/
	(void)argv;
	(void)table;

	if (argc == 5 || argc == 6)
		//validate_args
		write(STDOUT_FILENO, "Valid number of parameters\n", 27);
	else
	{
		if (argc == 1)
			print_error("Error: no parameters provided\n");
		else if (argc < 5)
			print_error("Error: too few parameters\n");
		else
			print_error("Error: too many parameters\n");
		printf("Usage: nbr_philos  time_to_die time_to_eat time_to_sleep ");
		printf("[times_each_philo_must_eat]\n");
		return (-1);
	}
	return (1);
}

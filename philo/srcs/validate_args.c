/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 00:21:35 by tsoares-          #+#    #+#             */
/*   Updated: 2024/06/01 01:13:35 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	is_greater_than_zero(long value)
{
	return (value >= 0);
}
/*
int	is_int(const char *s)
{
	// check if it's a valid integer
	// non-numeric charcters should print an error message
	// return 1 if it's a valid integers, otherwise return zero
}*/

int	validate_args(int args_count, char **args_value)
{
	if (args_count != 5 && args_count != 6)
	{
		printf("Usage: %s number_of_philosophers time_to_die"
			"time_to_eat time_to_sleep"
			"[number_of_times_each_philosopher_must_eat]\n",
			args_value[0]);
		return (0);
	}
	while (*(args_value + 1))
	{
		if (!is_greater_than_zero(str_to_long(*(args_value + 1))))
		{
			printf("Error: All arguments must be greater than zero.\n");
			return (0);
		}
		args_value++;
	}
	// call is_int function. If it returns 0, display an error message
	// Return 1 if all arguments are valid, otherwise return zero
	return (1);
}

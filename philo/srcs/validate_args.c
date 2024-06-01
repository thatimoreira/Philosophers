/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 00:21:35 by tsoares-          #+#    #+#             */
/*   Updated: 2024/06/01 03:40:14 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_int(const char *s)
{
	while (*s)
	{
		if (!is_digit(*s))
			return (0);
		s++;
	}
	return (1);
}

int	is_greater_than_zero(long value)
{
	return (value > 0);
}

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
			printf("Error: All arguments must be greater than"
				" zero.\n");
			return (0);
		}
		if (!is_int(*(args_value + 1)))
		{
			printf("Error: All arguments must be numbers.\n");
			return (0);
		}
		args_value++;
	}
	return (1);
}

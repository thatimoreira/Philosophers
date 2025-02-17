/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 08:21:32 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/16 08:23:23 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (-1);
}

int	convert_number(const char *arg)
{
	long	num;

	num = 0;
	if (*arg == '-')
		return (print_error("Error: parameters must be greather than zero\n"));
	while (*arg)
	{
		if (ft_isdigit(*arg) == -1)
			return (print_error("Error: parameters must have only numbers\n"));
		num = num * 10 + (*arg - '0');
		if (num > INT_MAX)
			return (print_error("Error: parameter exceeds INT_MAX\n"));
		arg++;
	}
	if (num == 0)
		return (print_error("Error: parameters must be greather than zero\n"));
	return ((int)num);
}

bool parse_args(int argc, char **argv, t_table *table)
{
    table->nbr_philos = convert_number(argv[1]);
	table->time_to_die = convert_number(argv[2]);
	table->time_to_eat = convert_number(argv[3]);
	table->time_to_sleep = convert_number(argv[4]);
    if (table->nbr_philos == -1 || table->time_to_die == -1
		|| table->time_to_eat == -1 || table->time_to_sleep == -1)
        return (false);
    if (table->nbr_philos < MIN_PHILO || table->nbr_philos > MAX_PHILO)
    {
        print_error("Error: invalid number of philosophers\n");
        return (false);
    }
    if (argc == 6)
    {
        table->times_must_eat = convert_number(argv[5]);
        if (table->times_must_eat == -1)
            return (false);
        if (table->times_must_eat < 1)
        {
            print_error("Error: philosophers must eat at least one time\n");
            return (false);
        }
    }
    return (true);
}
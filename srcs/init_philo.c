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

long int	str_to_long(char *arg)
{
	long int	n;
	int			signal;

	n = 0;
	signal = 1;
	while (*arg)
	{
		if (*arg == '-')
		{
			signal = -1;
			arg++;
		}
		n = n * 10 + (*arg - 48);
		arg++;
	}
	return (n * signal);
}

// input: number_of_philosophers time_to_die time_to_eat time_to_sleep
// [number_of_times_each_philosopher_must_eat]
int	main(int argc, char **argv)
{
	int			nbr_philo;
	long int	time_to_die;
	long int	time_to_eat;
	long int	time_to_sleep;
	long int	n_times_must_eat;

	nbr_philo = 0;
	time_to_die = 0;
	time_to_eat = 0;
	time_to_sleep = 0;
	n_times_must_eat = 0;
	(void)argv;
	if (is_valid_input(argc - 1))
	{
		nbr_philo = str_to_long(argv[1]);
		time_to_die = str_to_long(argv[2]);
		time_to_eat = str_to_long(argv[3]);
		time_to_sleep = str_to_long(argv[4]);

		printf("nbr_philo: %d\n", nbr_philo);
		printf("time_to_die: %lu\n", time_to_die);
		printf("time_to_eat: %lu\n", time_to_eat);
		printf("time_to_sleep: %lu\n", time_to_sleep);

		if (argc == 6)
		{
			n_times_must_eat = str_to_long(argv[5]);
			printf("n_times_must_eat: %lu", n_times_must_eat);
		}
	}
	else
		return (print_return(STDERR_FILENO, "\n\nINVALID USER INPUT\n\n", false, 22));
	return (0);
}

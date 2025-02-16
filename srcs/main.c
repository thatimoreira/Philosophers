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


/*bool	philo_atol(char *arg, long int *nbr)
{
	int			signal;

	// checar se é > 0

	*nbr = 0;
	signal = 1;
	if (*arg == '-')
	{
		signal = -1;
		arg++;
	}
	if (is_alnum(arg))
	{
		while (*arg)
		{
			*nbr = *nbr * 10 + (*arg - 48);
			arg++;
		}
		*nbr *= signal;
		return (true);
	}
	else
		return (msg_return(STDERR_FILENO, "Error: please, inform only numbers\n",
			false, 35));
}
*/

// input: number_of_philosophers time_to_die time_to_eat time_to_sleep
// [number_of_times_each_philosopher_must_eat]
int	main(int argc, char **argv)
{
	/*int			nbr_philo;
	long int	time_to_die;
	long int	time_to_eat;
	long int	time_to_sleep;
	long int	n_times_must_eat;


	// Todos param > 0

	nbr_philo = 0; // INT positivo
	time_to_die = 0;
	time_to_eat = 0;
	time_to_sleep = 0;
	n_times_must_eat = 0; // INT positivo >= 1
	if (is_valid_input(arc, argv, table)) // passar p/validate input argc e argv e lá fazer todas as validações e converter numero
	{ // verificar se todos os numeros são > 0 e se nbr_philo é int
		nbr_philo = philo_atol(argv[1], &nbr_philo);
		time_to_die = philo_atol(argv[2], &time_to_die);
		time_to_eat = philo_atol(argv[3], &time_to_die);
		time_to_sleep = philo_atol(argv[4], &time_to_die);

		printf("nbr_philo: %d\n", nbr_philo);
		printf("time_to_die: %lu\n", time_to_die);
		printf("time_to_eat: %lu\n", time_to_eat);
		printf("time_to_sleep: %lu\n", time_to_sleep);

		if (argc == 6)
		{
			n_times_must_eat = philo_atol(argv[5], &time_to_die);
			printf("n_times_must_eat: %lu\n", n_times_must_eat);
		}
	}
	else
		return (print_return(STDERR_FILENO, "\n\nINVALID USER INPUT\n\n", false, 22));
	return (0);*/
	t_table	table;

	if(!is_valid_input(argc, argv, &table))
		return (-1);
	return (0);
}

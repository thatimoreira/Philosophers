/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 04:32:13 by tsoares-          #+#    #+#             */
/*   Updated: 2024/06/02 04:32:16 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int init_shared_data(t_shared_data *shared_data, char **values)
{
    shared_data->nbr_philos = str_to_long(values[1]);
    shared_data->time_to_die = str_to_long(values[2]);
    shared_data->time_to_eat = str_to_long(values[3]);
    shared_data->time_to_sleep = str_to_long(values[4]);
    shared_data->times_philo_must_eat = 0;
    if (values[5])
        shared_data->times_philo_must_eat = str_to_long(values[5]);

    printf("nbr_philos: %d\n", (int)shared_data->nbr_philos);
    printf("time_to_die: %llu\n", shared_data->time_to_die);
    printf("time_to_eat: %llu\n", shared_data->time_to_eat);
    printf("time_to_sleep: %llu\n", shared_data->time_to_sleep);
    printf("times_philo_must_eat: %d\n", (int)shared_data->times_philo_must_eat);
    return (1);
}

int init_simulation(char **values)
{
    t_shared_data	*shared_data;

    shared_data = (t_shared_data *)malloc(str_to_long(values[1]) * sizeof(t_shared_data));
    if (!shared_data)
    {
        write(2, "Error: shared data allocation failured\n", 40);
        return (0);
    }
    if (!init_shared_data(shared_data, values))
		return (-1);
    return (1);
}
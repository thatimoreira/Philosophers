/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:19:34 by tsoares-          #+#    #+#             */
/*   Updated: 2024/06/02 01:56:04 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <pthread.h>

#define MAX_PHILOSOPHERS 5

// struct to store each philosopher state and attributes
typedef struct s_philo
{
	int		philo_id;
	int		fork_left; // index of the left fork
	int		fork_right; // index of the right fork
	long long	last_meal_time; // timestamp for the last meal
	int		meals_eaten;
	pthread_t	philo_thread; // thread handle for the philosopher
}			t_philo;

// struct that holds shared data that is common to all philosophers, such as
// the nbr of philosophers, timing info, and synchronization primitives
typedef struct s_shared_data
{
	int		number_of_philosophers;
	long long	time_to_die;
	long long	time_to_eat;
	long long	time_to_sleep;
	int		number_of_times_each_philosopher_must_eat;
	int		stop_simulation;
	long long	start_time;
	pthread_mutex_t	*fork;
	pthread_mutex_t	print_lock; // mutex used for synchronization in multithreading
	t_philo		*philo;
}			t_shared_data;

long	str_to_long(const char *str);
int	validate_args(int args_count, char **args_value);

#endif

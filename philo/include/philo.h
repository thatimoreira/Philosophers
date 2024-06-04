/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:19:34 by tsoares-          #+#    #+#             */
/*   Updated: 2024/06/02 04:19:43 by tsoares-         ###   ########.fr       */
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
	int						philo_id;
	pthread_mutex_t			*left_hand;
	pthread_mutex_t			*right_hand;
	long long				last_meal_time; // timestamp for the last meal
	int						meals_eaten;
	pthread_t				philo_thread; // thread handle for the philosopher
	struct s_shared_data	*shared_data; // give each philo access to shared data
}							t_philo;

// struct that holds shared data that is common to all philosophers, such as
// the nbr of philosophers, timing info, and synchronization primitives
typedef struct s_shared_data
{
	int				nbr_philos;
	long long		time_to_die;
	long long		time_to_eat;
	long long		time_to_sleep;
	int				times_philo_must_eat;
	int				stop_simulation;
	long long		start_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print_lock; // mutex used for synchronization in multithreading
	t_philo			*philos; // pointer to array of philosophers
}					t_shared_data;

long	str_to_long(const char *str);
int		validate_args(int args_count, char **args_value);
int		init_simulation(char **values);
void	*philosopher_routine(void *args);
void	init_mutexes(t_shared_data *shared_data);
void	init_philosopher_data(t_shared_data *shared_data, int i);

#endif

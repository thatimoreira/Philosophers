/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:05:31 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/13 16:05:33 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

#include <pthread.h>
#include <sys/time.h>

typedef struct s_table t_table;

typedef struct s_philo
{
    int             philo_id;
    pthread_t       philo_thread; // thread do philo
    pthread_mutex_t *fork_left;
    pthread_mutex_t *fork_right;
    long long       timestamp_last_meal;
    int             meals_eaten;
    t_table         *table;
} t_philo;

typedef struct s_table
{
    int             nbr_philos;
    int             time_to_die;
    int             time_to_eat;
    int             time_to_sleep;
    int             times_must_eat; // quantidade max que philos devem comer (arg opcional)
    long long       start_time; // pegar com gettimeofday()
    pthread_mutex_t *forks; // array de mutexes
    pthread_mutex_t sync_prints; // mutex p/sincronizar os prints
    t_philo         *philos;

} t_table;

#endif
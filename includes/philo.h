/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:23:23 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/16 08:19:15 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include <pthread.h>
# include "structs.h"

# define MIN_PHILO  2
# define MAX_PHILO 200

//--- INPUT VALIDATION --------------------------------------------------------
int		is_valid_input(int argc, char **argv, t_table *table);
int		print_error(const char *message);

//--- PARSE -------------------------------------------------------------------
bool	parse_args(int argc, char **argv, t_table *table);

//--- UTILS -------------------------------------------------------------------
size_t	ft_strlen(const char *s);

//--- INIT_DINNER -------------------------------------------------------------
void	init_data(t_table *table);

#endif

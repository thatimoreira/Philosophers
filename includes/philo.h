/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:23:23 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/12 18:47:24 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>

# define MIN_PHILO  1
# define MAX_PHILO 200
# define INT_MIN INT_MAX

//--- INIT --------------------------------------------------------------------

//--- INPUT VALIDATION --------------------------------------------------------
bool	is_valid_input(int n_args);
bool	msg_return(int fd, char *message, bool return_value, int n_chars);

//--- PARSE ARGS --------------------------------------------------------------

# endif

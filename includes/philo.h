/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:23:23 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/10 16:40:22 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

//--- INIT --------------------------------------------------------------------

//--- INPUT VALIDATION --------------------------------------------------------
bool	is_valid_input(int n_args);
bool	print_return(int fd, char *message, bool return_value, int n_chars);

//--- PARSE ARGS --------------------------------------------------------------

#endif

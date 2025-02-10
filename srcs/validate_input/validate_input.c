/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:05:51 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/10 16:40:15 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

bool	print_return(int fd, char *message, bool return_value, int n_chars)
{
	write(fd, message, n_chars);
	return (return_value);
}

bool	is_valid_input(int n_args) // vai virar count_args
{
	if (n_args == 4)
		return (print_return(STDOUT_FILENO,
					"Success: mandatory number of params\n", true, 36));
	else if (n_args == 5)
		return (print_return(STDOUT_FILENO,
					"Success: mandatory + optional number of paramenters\n",
					true, 52));
	else if (n_args == 0)
		return (print_return(STDERR_FILENO, "Error: no params\n",
								false, 17));
	else if (n_args < 4)
		return (print_return(STDERR_FILENO, "Error: too few arguments\n",
								false, 25));
	else
		return (print_return(STDERR_FILENO, "Error: too many arguments\n",
								false, 26));
	return (true);
}
// is_valid_input chama count_args

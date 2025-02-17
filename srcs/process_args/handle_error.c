/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                      :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 08:20:01 by tsoares-          #+#    #+#             */
/*   Updated: 2025/02/16 08:20:03 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

int	print_error(const char *message)
{
	write(STDERR_FILENO, message, ft_strlen(message));
	return (-1);
}

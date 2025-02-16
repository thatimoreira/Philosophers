#include "../../includes/philo.h"

void	print_error(const char *message)
{
	write(STDERR_FILENO, message, ft_strlen(message));
}
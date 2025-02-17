#include "../includes/philo.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

// test is_valid_input() and check error messages
void    run_test(char *test_name, int argc, char **argv, int expected_exit)
{
    int     result;
	t_table table;

	printf("\n---------------------- RUNNING TEST: %s ----------------------\n", test_name);
	result = is_valid_input(argc, argv, &table);
	if (result == expected_exit)
		printf("✅ Passed\n\n");
	else
		printf("❌ Failed (Expected %d, got %d)\n\n", expected_exit, result);
}

int	main(void)
{

	// Test 1: no params provided
	run_test("No parameters provided", 1, NULL, -1);

	// Test 2: invalid  number of philos
	char *test2[] = {"./philo", "0", "800", "200", "200", "5", NULL};
	run_test("nbr_philo < MIN_PHILO", 6, test2, -1);

	// Test 3: valid number of philos
	char *test3[] = {"./philo", "5", "800", "200", "200", "5", NULL};
	run_test("Valid number of philos", 6, test3, 1);

	// Test 4: non-numeric param(s)
	char *test4[] = {"./philo", "5five", "800", "200", "200", "5", NULL};
	run_test("Non-numeric param", 6, test4, -1);

	// Test 5: time_to_die == 0
	char *test5[] = {"./philo", "5", "0", "200", "200", "5", NULL};
	run_test("time_to_die == 0", 6, test5, -1);

	// Test 6: times_must_eat < 1
	char *test6[] = {"./philo", "5", "800", "200", "200", "0", NULL};
	run_test("times_must_eat < 1", 6, test6, -1);

	// Teste 7: nbr_philos > MAX_PHILO
	char *test7[] = {"./philo", "300", "800", "200", "200", "5", NULL};
	run_test("nbr_philos > MAX_PHILO", 6, test7, -1);

	// Test 8: 1 parameter
    char *test8[] = {"./philo", "1", NULL};
    run_test("Too few parameters (1 param)", 2, test8, -1);

    // Test 9: 2 parameters
    char *test9[] = {"./philo", "1", "2", NULL};
    run_test("Too few parameters (2 params)", 3, test9, -1);

    // Test 10: 3 parameters
    char *test10[] = {"./philo", "1", "2", "3", NULL};
    run_test("Too few parameters (3 params)", 4, test10, -1);

    // Test 11: 6 parameters
    char *test11[] = {"./philo", "1", "2", "3", "4", "5", "6", NULL};
    run_test("Too many parameters (6 params)", 7, test11, -1);

    // Test 12: nbr_philos == 0
    char *test12[] = {"./philo", "0", "2", "3", "4", "5", NULL};
    run_test("nbr_philos == 0", 6, test12, -1);

    // Test 13: nbr_philos non-numeric
    char *test13[] = {"./philo", "0a", "2", "3", "4", "5", NULL};
    run_test("nbr_philos non-numeric", 6, test13, -1);

    // Test 14: time_to_die == 0
    char *test14[] = {"./philo", "1", "0", "3", "4", "5", NULL};
    run_test("time_to_die == 0", 6, test14, -1);

    // Test 15: time_to_die non-numeric
    char *test15[] = {"./philo", "1", "0f", "3", "4", "5", NULL};
    run_test("time_to_die non-numeric", 6, test15, -1);

	// Test 16: time_to_eat == 0
    char *test16[] = {"./philo", "1", "2", "0", "4", "5", NULL};
    run_test("time_to_eat == 0", 6, test16, -1);

    // Test 17: time_to_eat non-numeric
    char *test17[] = {"./philo", "1", "2", "0h", "4", "5", NULL};
    run_test("time_to_eat non-numeric", 6, test17, -1);

    // Test 18: time_to_sleep == 0
    char *test18[] = {"./philo", "1", "2", "3", "0", "5", NULL};
    run_test("time_to_sleep == 0", 6, test18, -1);

    // Test 19: time_to_sleep non-numeric
    char *test19[] = {"./philo", "1", "2", "3", "0g", "5", NULL};
    run_test("time_to_sleep non-numeric", 6, test19, -1);

    // Test 20: nbr_philos > MAX_PHILO
    char *test20[] = {"./philo", "201", "2", "3", "4", "2", NULL};
    run_test("nbr_philos > MAX_PHILO", 6, test20, -1);

    // Test 21: times_must_eat == 0
    char *test21[] = {"./philo", "1", "2", "3", "4", "0", NULL};
    run_test("times_must_eat == 0", 6, test21, -1);

    // Test 22: times_must_eat non-numeric
    char *test22[] = {"./philo", "1", "2", "3", "4", "0t", NULL};
    run_test("times_must_eat non-numeric", 6, test22, -1);

    // Test 23: times_must_eat > INT_MAX
    char *test23[] = {"./philo", "2", "2", "3", "4", "2147483648", NULL};
    run_test("times_must_eat > INT_MAX", 6, test23, -1);
	return (0);
}

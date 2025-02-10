# Philosophers 
##### 🇧🇷 [Versão em Português](docs/README.pt-br.md)<br>
This program is a simulation of the classic **dinning philosophers problem** with a slight adaptation: in addition to thinking and eating, philosophers also sleep. They compete for the forks available on the table to be able to eat.

The implementation is written in C, where each philosopher is represented by a **thread** and **mutexes** are used to control access to the forks.<br><br>

## Project Rules

1. E    One or more philosophers sit around a table
2. Each philosopher is represented by a dedicated thread
3. There is only one fork between each pair of philosophers
4. The number of forks is equal to the number of philosophers
5. There is a large bowl of spaghetti in the center of the table so they can serve themselves
6. Each philosopher can be in one of three states: thinking, eating, or sleeping
7. The total number of philosophers is defined by number_of_philosophers
8. To eat, a philosopher must hold two forks: one on the left and one on the right
9. Each fork can only be held by one philosopher at a time
10. When a philosopher finishes eating, they put the forks back on the table and go to sleep
11. When they wake up, they start thinking
12. The simulation ends if a philosopher dies of starvation
13. No philosopher can know when another philosopher is about to die
14. Philosophers do not communicate with each other
15. To avoid concurrency issues, each fork is protected by a mutex
16. Global variables are not allowed
17. The program takes the following arguments:
       - **number_of_philosophers**: the number of philosophers and also the number of forks;
       - **time_to_die** (in ms): if a philosopher does not start eating within this time since the beginning of the simulation or their last meal, they die;
       - **time_to_eat** (in ms): the time a philosopher takes to eat. During this period, they must hold two forks;
       - **time_to_sleep** (in ms): the time a philosopher spends sleeping
       - **number_of_times_each_philosopher_must_eat** (optional argument): if specified, the simulation ends when all philosophers have eaten at least this number of times. If not specified, the simulation ends when a philosopher dies.

18. Each philosopher is assigned a unique identifier (```philo_id```), ranging from 1 to ```number_of_philosophers```
19. Philosopher #1 sits next to philosopher ```number_of_philosophers```
20. Any other philosopher *N* sits between Philosopher *N-1* and philosopher *N+1*<br>

<br>

## Program Logs and State Messages

21. Any change in a philosopher's state must follow the format below:

    ```plaintext
    timestamp_in_ms X has taken a fork
    timestamp_in_ms X is eating
    timestamp_in_ms X is sleeping
    timestamp_in_ms X is thinking
    timestamp_in_ms X died
    ```

    - **timestamp_in_ms** represents the current simulation time in milliseconds
    - **X** represents the corresponding philosopher’s number. <br>

<br>

22. State messages must not be mixed:

    - no message should be corrupted or overwritten by another.
    - the output must be clear, ordered, and properly synchronized.

23. If a philosopher dies, the corresponding message must be displayed within a maximum of 10 ms. The program must ensure this timing accuracy.

24. The program must not have any **data races**!

    - correct thread synchronization must be ensured to prevent **race conditions**
    - the use of mutexes and other synchronization strategies must be well planned<br>

<br>
## ⚠ Ensuring Survival

Each philosopher must eat regularly and cannot be left waiting indefinitely. This means all philosophers should have fair access to the forks, avoiding **deadlocks** and **starvation** (when a philosopher never gets to eat).

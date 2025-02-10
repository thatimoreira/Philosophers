# Philosophers

This program simulates the classic dinning philosophers problem with an adaptation where philosophers also sleep in addition to thinking and eating. They must compete for access to forks placed between them.

The project is implemented in C, and the goal of this program is to solve the modified dinning philosophers problem by implementing it with threads representing each philosopher and mutex locks representing the forks on the table.

## Project Rules

1. Each philosopher should be represente by a separated thread;
2. There should be 'number_of_philosophers' number of philosohers;
3. Each philosopher can perform three actions: think, eat or sleep;
4. To eat or sleep, a philosopher must acquire two adjacent forks
(one on their left side and one on their right side);
5. A fork can only be held by one philosopher at a time;
6. If any philosopher doesn't start eating within 'time_to_die'
miliseconds after starting its last meal or when they started if it's

 is a classic synchronization problem in computer science, 

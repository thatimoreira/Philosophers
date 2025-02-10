# Philosophers
##### 🇧🇷 [English version](../README.en.md)<br>
Este projeto é uma simulação do clássico problema dos **filósofos comensais** (*dining philosophers problem*), com uma pequena adaptação: além de pensar e comer, os filósofos também dormem. Eles competem pelos garfos disponíveis na mesa para conseguirem se alimentar.

A implementação é feita em C, onde cada filósofo é representado por uma **thread** e **mutexes** são usadas para controlar o acesso aos garfos.
<br>
<br>
## Project Rules

1. Um ou mais filósofos estão sentados em volta de uma mesa
2. Cada filósofo é representado por uma thread exclusiva
3. Há apenas um garfo entre cada par de filósofos
4. O número de garfos é igual ao de filósofos
5. Há um bowl grande de spaghetti no centro da mesa para que eles possam se servir
6. Cada filósofo pode estar em um dos três estados: pensando, comendo ou dormindo
7. O número total de filósofos é definido por ```number_of_philosophers```
8. Para comer, um filósofo precisa de dois garfos: um à sua esquerda e outro à sua direita
9.  Cada garfo só pode ser segurado por um filósofo por vez
10. Quando um filósofo termina de comer, ele devolve os garfos para a mesa e dorme
11. Quando acorda, ele começa a pensar
12. A simulação termina se um filósofo morrer de fome
13. Nenhum filósofo pode saber quando outro está prestes a morrer
14. Os filósofos não se comunicam entre si
15. Para evitar problemas de concorrência, cada garfo é protegido por um mutex
16. Proibido usar variáveis globais
17. Os argumentos do programa são:
       - **number_of_philosophers**: número de filósofos e também o número de garfos;
       - **time_to_die** (em ms): se um filósofo não começar a comer dentro desse tempo desde o início da simulação ou desde sua última refeição, ele morre;
       - **time_to_eat** (em ms): tempo que um filósofo leva para comer e durante esse período, ele precisa segurar dois garfos;
       - **time_to_sleep** (em ms): tempo que um filósofo passa dormindo;
       - **number_of_times_each_philosopher_must_eat** (argumento opcional): se especificado, a simulação termina quando todos os filósofos tiverem comido pelo menos esse número de vezes. Se não especificado, a simulação termina quando um filósofo morre.
18. Cada filósofo recebe um identificador único (``philo_id``), que varia de 1 a ```number_of_philosophers```
19. O filósofo nº 1 senta-se ao lado do filósofo de nº ```number_of_philosophers```
20. Qualquer outro filósofo *N* se senta entre os filósofos *N-1* e *N+1*
<br>
<br>

## Logs do programa e mensagens de estado
21. Qualquer mudança de estado de um filósofo deve seguir o seguinte formato:

    ```plaintext
    timestamp_in_ms X has taken a fork
    timestamp_in_ms X is eating
    timestamp_in_ms X is sleeping
    timestamp_in_ms X is thinking
    timestamp_in_ms X died
    ```

    - **timestamp_in_ms** representa o tempo atual da simulação em milissegundos
    - **X** representa o número do filósofo correspondente
<br>
<br>
22. As mensagens de estado não podem se misturar:

    - nenhuma mensagem pode ser corrompida ou sobrescrita por outra
    - o output deve ser legível e sincronizado corretamente

23. Uma mensagem informando que um filósofo morreu deve ser exibida no máximo 10 ms após sua morte - o programa deve garantir essa precisão na exibição da mensagem
    
24. O programa não pode ter **data races**!

    - a sincronização correta entre threads deve ser garantida para evitar condições de corrida (**race conditions**)
    - o uso de mutexes e outras estratégias de sincronização deve ser bem planejado
<br>
<br>

## ⚠️ Garantia de Sobrevivência

Cada filósofo deve comer regularmente e não pode ficar esperando indefinidamente. Isso significa que todos devem ter acesso justo aos garfos, evitando **deadlocks** e **starvation** (quando um filósofo nunca consegue comer).

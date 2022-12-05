# Fibonacci

A famosa sequência de Fibonacci é aquela em que um elemento é definido como sendo a soma dos dois anteriores. Matematicamente falando,

    F(n) =  | 1, se n = 1 ou n = 2;
            | F(n-1) + F(n-2), caso contrário.

Sua tarefa, neste exercício, é implementar, utilizando recursão, a função de Fibonacci de forma eficiente.

Você deve submeter um arquivo contendo a função recursiva

    long int fibonacci (int n);

em que n é o elemento da série que sua função deve retornar (1 <= n <= 80).

Por exemplo, se sua função for chamada da forma:

    fibonacci(1)

ela deve retornar 1.

Se for chamada da forma:

    fibonacci(11)

ela deve retornar 89.

---

Author: John L. Gardenghi

# Número 91

João é um matemático e programador que adora subtrações numéricas. Certo dia, João encontrou um livro com o título “O Número 91”. Conforme lê-se no livro:

    “Aquele que abrir este livro, há de ser amaldiçoado,
    qualquer número menor ou igual a 100 será modificado.
    Aconselho-te portanto, não utilize mais a subtração,
    pois o número 91 será sua maldição.”

João não deu atenção para o livro, já que não acredita em maldições e coisas do tipo. Passados alguns dias, João quis escrever um programa que sempre fizesse a subtração de qualquer número dado em 10.

Você deve modificar o programa de João, adicionando a maldição a seguir para que ele aprenda a não mais abrir livros estranhos que encontrar por aí.

## _Maldição_:

Se N >= 101, então f91 (N) = N - 10.

Se N <= 100, então f91 (N) = f91 (f91 (N + 11)).

## Entrada

O arquivo de entrada consiste de, no máximo, 250.000 casos de teste. Cada caso de teste consiste em um único número N, onde (0 <= N <= 1.000.000). O fim da entrada é alcançado quando o número 0 é encontrado. O número 0 não deve ser considerado como parte do conjunto de teste.

## Saída

O programa deve imprimir cada resultado em uma linha. Para um dado número N e seu respectivo resultado M, a saída deverá seguir o seguinte formato:

    f91(N) = M

## Exemplo

### Entrada

    500
    91
    0

### Saida

    f91(500) = 490
    f91(91) = 91

Author: David Déharbe Adaptado por: Gabriel Tiveron e Murilo Loiola

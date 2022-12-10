Pares de caracteres
Definiremos um par de caracteres numa string quando há a ocorrência de um mesmo caracter separado por um caracter qualquer. Por exemplo, na string “AxA”, há um par. Os pares podem se sobrepor, por exemplo, na string “aaaa” há dois pares: os primeiros três caracteres formam um par de ‘a’s separados por um ’a’, os três últimos caracteres formam outro par de ‘a’s, separado por um ’a’. Sua tarefa neste exercício é fazer um algoritmo recursivo que conte a quantidade de pares numa string.

Observação: Sua recursão não pode usar laços.

Entrada
A entrada é composta por uma única linha contendo uma string de, no máximo, 200 caracteres.

Saída
A saída deve conter uma única linha com a quantidade de pares que há na string.

Exemplo de Entrada 1
axa
Exemplo de Saída 1
1
Exemplo de Entrada 2
axax
Exemplo de Saída 2
2
Exemplo de Entrada 3
axbx
Exemplo de Saída 3
1
Author: John L. Gardenghi (adaptado do problema countPairs do codingbat.com)

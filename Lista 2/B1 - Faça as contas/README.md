# Faça as contas

Oh não. Aparecido está novamente encrencado com as contas de seus amigos. São muitas incertezas e para complicar a vida de nosso jovem calculista, seus amigos trazem muitas contas diariamente para ele verificar.

Aparecido não aguenta mais e pediu sua ajuda para implementar uma _função_ que faça as contas corretamente.

## Tarefa

Sua tarefa é implementar a função `faz_conta_direito`, com o seguinte protótipo:

    int faz_conta_direito(int parcelas, char op);

O primeiro parâmetro da função representa a quantidade de `parcelas` p_i que devem ser lidas da entrada padrão e o segundo parâmetro representa a operação que deverá ser realizada.

Sabemos que:

- 2 <= parcelas <= 1000

- op ∈ {'+', '-'}

- -2^(20) <= p_i <= 2^(20)

_ATENÇÃO_ - sua submissão deverá conter somente esta função.

## Entrada

O seu programa receberá dois parâmetros, conforme especificado acima, e deverá ler parcelas números da entrada padrão.

## Saída

A sua função não deve imprimir na saída padrão, apenas deverá retornar o valor da conta processada.

## Exemplos

### Exemplo de entrada

- Exemplo de chamada para sua função:

        int n = faz_conta_direito(4, '-');

- Conteúdo na entrada padrão

        10 3 3 2

### Saída para o exemplo de entrada acima

A sua função retorna o valor 2

---

### Exemplo de entrada

- Exemplo de chamada para sua função:

        int n = faz_conta_direito(4, '+');

- Conteúdo na entrada padrão

        10 3 3 2

### Saída para o exemplo de entrada acima

A sua função retorna o valor 18

---

Author: Bruno Ribas

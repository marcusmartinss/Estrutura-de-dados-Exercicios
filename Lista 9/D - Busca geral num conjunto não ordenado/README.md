# Busca geral num conjunto não ordenado

Sua tarefa, neste exercício, é ler um conjunto de N números inteiros e depois verificar se M elementos pertencem ou não ao conjunto. Se pertencerem, você deve imprimir a posição que ocupam. Se não, você deve imprimir -1.

M é um valor muito grande, por isso, você deve elaborar um algoritmo eficiente para efetuar as buscas!

## Entrada

---

A entrada é composta M+N+1 linhas. A primeira linha contém o valor de N e M, respectivamente (1 <= N, M <= 10^9). As N linhas seguintes contém números inteiros (que cabem num inteiro de 32 bits) que compõem o conjunto de dados de interesse de busca. As M linhas seguintes contêm os inteiros que devem ser procurados no conjunto de dados.

## Saída

---

Para cada inteiro x dado, você deve imprimir a posição j tal que v[j] = x, ou -1 se x não pertencer a v.

## Exemplo

### Entrada

    6 4
    7
    3
    4
    9
    1
    5
    0
    3
    15
    5

### Saída

    -1
    1
    -1
    5

Author: John L. Gardenghi

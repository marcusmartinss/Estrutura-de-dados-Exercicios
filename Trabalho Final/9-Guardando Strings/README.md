# Guardando Strings

Ai Ai Ai… Temos mais um problema para resolver… Nem sempre a implementação é tão simples, uma forma mais elaborada é obrigatória para diversos problemas.

Para o problema de hoje temos que processar uma quantidade gigantesca de caracteres, o pior de tudo é que não sabemos o tamanho a priori e tão pouco o que fazer antes de armazenar as strings.

No entanto o objetivo é bastante direto.

## Entrada

A entrada é composta por um único caso de teste. O caso de teste possui diversas linhas, cada linha é composta por uma única palavra com letras [A - Z, a - z] e possui um tamanho S, com `1 ≤ S ≤ 2²²`, sabemos que a entrada possui no máximo
10⁵ linhas. Também é sabido que o tamanho de todas as strings da entrada tem no máximo 2²² caracteres. A entrada termina com fim de arquivo `EOF`.

## Saída

A saída é composta por diversas linhas, cada linha da saída deverá conter quantas vezes a última string aparece em cada uma das strings lidas.

## Exemplos

### Exemplo de entrada

    internet
    novidade
    absurdamente
    articulada
    compulsoriamente
    dentro
    dos
    conformes
    me

### Saída para o exemplo de entrada acima

    0
    0
    1
    0
    1
    0
    0
    1

### Exemplo de entrada

    alegria
    dura
    pouco
    quando
    estamos
    alegres
    por
    motivos
    obscuros
    A

### Saída para o exemplo de entrada acima

    0
    0
    0
    0
    0
    0
    0
    0
    0

---

### Exemplo de entrada

    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaa
    ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
    kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
    hehe
    ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
    a

### Saída para o exemplo de entrada acima

    79
    2
    0
    0
    0
    0

---

Author: Bruno Ribas

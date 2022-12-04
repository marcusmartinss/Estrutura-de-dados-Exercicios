# String Secreta

Bruno Ribas

## Preâmbulo

---

Os alunos da Faculdade Geral de Atlândida (FGA) iniciaram uma nova mania nos corredores. Toda a comunicação é realizada por meio de um código muito simples. Eles se comunicam com números inteiros de significado especial.

A conversa é bastante completa e muitos alunos preferem deixar a conversa secreta. O que acontece é que nem todo mundo consegue decodificar a mensagem! E para isso pediram a sua ajuda para decodificar a mensagem.

A mensagem é relativamente simples, Sabir inventou um esquema em que se codifica as letras, tal como se faz em ASCII, utilizando apenas 1 byte, e em um número inteiro ele codifica 4 grupos de 1byte e depois divulga os grupos de 4bytes como um grande número de 4bytes.

A mensagem é disposta por vários números inteiros, de 4 bytes, a mensagem acaba quando ao menos 1 byte do grupo de 4 bytes vale zero (que representa o famoso EOS, _End of String_).

A sua tarefa é ler um conjunto de números inteiros e imprimir a mensagem codificada nela.

## Entrada

---

A entrada é composta por diversas linhas. Cada linha possui um número inteiro de 32bits representado em notação hexadecimal.

Sabemos que a entrada não possui mais de 1000 linhas.

A entrada termina em EOF, _End of File_.

---

## Saída

Você deverá imprimir a mensagem codificada em uma única linha.

---

## Exemplos

### Exemplo de entrada

    616c4f

### Saída para o exemplo acima

    Ola

---

### Exemplo de entrada

    694f

### Saída para o exemplo acima

    Oi

---

### Exemplo de entrada

    41

### Saída para o exemplo acima

    A

---

### Exemplo de entrada

    333231

### Saída para o exemplo acima

    123

---

### Exemplo de entrada

    34333231
    0

### Saída para o exemplo acima

    1234

---

### Exemplo de entrada

    34333231
    35

### Saída para o exemplo acima

    12345

---

### Exemplo de entrada

    34333231
    3635

### Saída para o exemplo acima

    123456

---

### Exemplo de entrada

    34333231
    373635

### Saída para o exemplo acima

    1234567

---

### Exemplo de entrada

    34333231
    38373635
    0

### Saída para o exemplo acima

    12345678

---

### Exemplo de entrada

    34333231
    38373635
    39

### Saída para o exemplo acima

    123456789

---

### Exemplo de entrada

    34333231
    38373635
    3039

### Saída para o exemplo acima

    1234567890

---

Author: Bruno Ribas

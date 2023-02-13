#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da pilha
typedef struct Node {
	int data;
	struct Node *next;
} Node;

// Estrutura da pilha (contendo a cabeça)
typedef struct Stack {
	struct Node *head;
} Stack;

// Inicializa a pilha
void init(struct Stack *stack) {
	stack->head = NULL;
}

// Adiciona um item na pilha
void push(struct Stack *stack, int data) {
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = stack->head;
	stack->head = newNode;
}

// Remove o item no topo da pilha
void pop(struct Stack *stack) {
	if (stack->head == NULL) {
		return;
	}
	struct Node *temp = stack->head;
	stack->head = temp->next;
	free(temp);
}

// Espia o item no topo da pilha
// as vezes tem que mudar o espia e fazer ele retornar um ponteiro
int peek(struct Stack *stack) {
	if (stack->head == NULL) {
		return -1;
	}
	return stack->head->data;
}

int main() {
	int mobiles, mobile, controle;
	Stack *pilha = malloc(sizeof(Stack));
	while (scanf("%d", &mobiles) != EOF)
	{
		if (mobiles == 0) break;
		controle = 0;
		for (int i = 0; i < mobiles; i++)
		{
			scanf("%d", &mobile);

			if ((mobile - controle) == 1)
				controle = mobile;
			else
			{
				push(pilha, mobile);
			}

			while (pilha->head != NULL && (pilha->head->data - controle) == 1)
			{
				controle = pilha->head->data;
				pop(pilha);
			}
		}
		if ((mobiles - controle) == 0)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}
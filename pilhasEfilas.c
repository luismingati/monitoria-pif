#include <stdlib.h>
#include <stdio.h>

typedef struct NodeFila {
    int valor;
    struct NodeFila *prox;
}  NodeFila;

typedef struct NodePilha {
    int valor;
    struct NodePilha *prox;
}  NodePilha;

void enqueue(NodeFila **head, NodeFila **tail, int valor);
void dequeue(NodeFila **head, NodeFila **tail);
void push(NodePilha **head, int valor);
void pop(NodePilha **head);
void imprimir(NodeFila *head);

int main() {
    NodeFila *head = NULL;
    NodeFila *tail = NULL;

    NodePilha *headPilha = NULL;
    
    enqueue(&head, &tail, 1);
    enqueue(&head, &tail, 2); 
    
    imprimir(head); 
    
    printf("INCERINDO VALOR 3:\n"); 
    
    enqueue(&head, &tail, 3); 

    imprimir(head);

    printf("REMOVENDO VALOR:\n");

    dequeue(&head, &tail);

    imprimir(head);

    printf("REMOVER TODOS:\n");
    dequeue(&head, &tail);
    dequeue(&head, &tail);

    imprimir(head);
    imprimir(tail);

    push(&headPilha, 1);
    push(&headPilha, 2); 
    
    imprimir(head); 
    
    printf("INCERINDO VALOR 3:\n"); 
    
    push(&head, 3); 

    imprimir(head);

    printf("REMOVENDO VALOR:\n");

    pop(&head);

    imprimir(head);

    printf("REMOVER TODOS:\n");
    pop(&head);
    pop(&head);

    imprimir(head);

    return 0;
}

void enqueue(NodeFila **head, NodeFila **tail, int valor) {
    NodeFila *novo = (NodeFila *) malloc(sizeof(NodeFila));
    novo->valor = valor;
    novo->prox = NULL;
    
    if (*head == NULL) {
        *head = novo;
    } else {
        (*tail)->prox = novo;
    }
    *tail = novo;
}

void dequeue(NodeFila **head, NodeFila **tail) {
    NodeFila *aux = *head;
    *head = aux->prox;
    
    free(aux);
    if (*head == NULL) {
        *tail = NULL;
    }
}

void push(NodePilha **head, int valor) {
    NodePilha *novo = (NodePilha *) malloc(sizeof(NodePilha));
    novo->valor = valor;
    novo->prox = *head;

    *head = novo;
}

void pop(NodePilha **head) {
    NodePilha *aux = *head;
    *head = aux->prox;
    free(aux);
}

void imprimir(NodeFila *head) {
    while (head != NULL) {
        printf ("%d ->", head->valor);
        head = head->prox;
    }
    printf("FIM\n");
}


#include <stdio.h>
#include <stdlib.h>

// Define o tamanho máximo da fila como 5
#define MAX_SIZE 5

// Definição da estrutura da fila
typedef struct {
    int items[MAX_SIZE];// Array para armazenar os elementos da fila
    int front; //Índice do elemento da frente da fila
    int rear; // Índice do elemento do final da fila
} Queue;

// Função para inicializar a fila
void inicializarQueue(Queue *q) {
    q->front = -1; //Inicializa o índice do elemento da frente como -1 (indicando fila vazia)
    q->rear = -1; // Inicializa o índice do elemento do final como -1 (indicando fila vazia)
}

// Função para verificar se a fila está vazia
int isEmpty(Queue *q) {
    return (q->rear == -1 && q->front == -1); // Retorna verdadeiro se ambos os índices estiverem -1
}

// Função para verificar se a fila está cheia
int isFull(Queue *q) {
    return(q->rear == MAX_SIZE -1);
}
#include <stdio.h>
#define SIZE 5  // Maximum size of the queue

// Structure to define a queue
typedef struct { int items[SIZE], front, rear; } Queue;

// Initialize the queue
void initQueue(Queue *q) { q->front = q->rear = -1; }

// Function to add an element to the queue
void enqueue(Queue *q, int v) {
    if (q->rear < SIZE - 1)  // Check if queue is not full
        q->items[++q->rear] = v, q->front = 0; // Insert element and update pointers
}

// Function to remove an element from the queue (dequeue)
void dequeue(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Removed %d\n", q->items[q->front++]); // Remove front element and update front pointer
}

// Function to display the queue elements
void displayQueue(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty!\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++) // Loop through elements
        printf("%d ", q->items[i]);
    printf("\n");
}

int main() {
    Queue q; initQueue(&q); // Declare and initialize queue
    
    // Insert elements into the queue
    for (int i = 10; i <= 50; i += 10) enqueue(&q, i);
    
    displayQueue(&q); // Display queue contents
    
    // Remove elements from the queue
    dequeue(&q);
    dequeue(&q);
    
    displayQueue(&q); // Display queue after removal
    return 0;
}

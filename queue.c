#include <stdio.h>
#define SIZE 100

int main() {
    int queue[SIZE];
    int n, i, front = 0, rear;

    printf("Enter number of elements to enqueue: ");
    scanf("%d", &n);

    rear = n - 1;

   
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &queue[i]);
    }

    
    printf("\nBefore Dequeue:\n");
    printf("Queue (Front to Rear): ");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    
    if (front <= rear) {
        printf("\nDequeued Element: %d", queue[front]);
        front++;
    }

    
    printf("\n\nAfter Dequeue:\n");
    printf("Queue (Front to Rear): ");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    if (front > rear) {
        printf("Queue is Empty");
    }

    return 0;
}
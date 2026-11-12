 
   #include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode, *last;
    int n, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            last = newnode;
        } else {
            last->next = newnode;
            newnode->prev = last;
            last = newnode;
        }
    }

    
    printf("\nForward Direction: ");
    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    
    printf("\nBackward Direction: ");
    temp = last;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL");

    return 0;
}
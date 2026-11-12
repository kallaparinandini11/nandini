#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int n, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);

        if (head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            temp = head;

            while (temp->next != head) {
                temp = temp->next;
            }

            temp->next = newnode;
            newnode->next = head;
        }
    }

    
    printf("\nCircular Linked List:\n");

    if (head != NULL) {
        temp = head;

        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);

        printf("(Back to Head)");
    }

    return 0;
}
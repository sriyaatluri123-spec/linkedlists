#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, arr[40];
    struct node {
        int data;
        struct node *next;
    };
    struct node *A = NULL;
    printf("Enter data for node ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    struct node *temp = malloc(sizeof(struct node));
    A = temp;
    A->data = arr[0];
    A->next = NULL;
    struct node *temp1 = A;
    for (i = 1; i < 5; i++) {
        temp = malloc(sizeof(struct node));
        temp->data = arr[i];
        temp1->next = temp;
        temp1 = temp1->next;
    }
    temp1->next = NULL;
    struct node *newNode = malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    temp1 = A;
    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }
    temp1->next = newNode;
    temp1 = A;
    while (temp1 != NULL) {
        printf("%d->", temp1->data);
        temp1 = temp1->next;
    }

    return 0;
}

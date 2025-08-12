#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, arr[40];
    struct node {
        int data;
        struct node* next;
    };
    struct node* A = NULL;
    struct node* temp, * temp1;
    printf("enter the data for the 1st node: ");
    scanf("%d", &arr[0]);
    temp = malloc(sizeof(struct node));
    A = temp;
    A->data = arr[0];
    A->next = NULL;
    temp1 = A;
    printf("%d", arr[0]);
    struct node* printPtr = A;
    while (printPtr != NULL) {
        printf("%d -> ", printPtr->data);
        printPtr = printPtr->next;
    }
    printf("NULL\n");
    for (i = 1; i < 3; i++) { 
        printf("enter the data for the %d node: ", i + 1);
        scanf("%d", &arr[i]);
    temp = malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        temp1->next = temp;
        temp1 = temp1->next;
        printf("%d: ", arr[i]);
        printPtr = A;
        while (printPtr != NULL) {
            printf("%d ->", printPtr->data);
            printPtr = printPtr->next;
        }
        printf("NULL\n");
    }

    return 0;
}

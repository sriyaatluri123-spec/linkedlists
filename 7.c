#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[40], i = 0;
    struct node {
        int data;
        struct node* next;
    };
    struct node *A = NULL, *temp, *temp1;
    printf("Enter data for 1st node");
    scanf("%d", &arr[i]);
    if (arr[i] != -1) {
        temp = malloc(sizeof(struct node));
        A = temp;
        A->data = arr[i];
        A->next = NULL;
        temp1 = A;
        i++;
    }
     while (1) {
        printf("Enter data for node %d", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] == -1) {
            break;
        }
        temp = malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        temp1->next = temp;
        temp1 = temp1->next;
        i++;
    }
    struct node *Ptrp = A;
    while (printPtr != NULL) {
        printf("%d->", Ptrp->data);
        printPtr = Ptrp->next;
    }

    return 0;
}

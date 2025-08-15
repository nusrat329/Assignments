#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* copyList(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = head->data;
    newNode->next = copyList(head->next);
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    printf("Original List: ");
    printList(head);

    struct Node* copiedList = copyList(head);

    printf("Copied List: ");
    printList(copiedList);

    return 0;
}

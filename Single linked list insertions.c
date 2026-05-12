#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at beginning
void insertBeginning(int value) {
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;

    head = newNode;

    printf("%d inserted at beginning\n", value);
}

// Insert at end
void insertEnd(int value) {
    struct Node *newNode, *temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("%d inserted at end\n", value);
}

// Insert at specific position
void insertPosition(int value, int pos) {
    struct Node *newNode, *temp;
    int i;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;

        printf("%d inserted at position %d\n", value, pos);
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid Position\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("%d inserted at position %d\n", value, pos);
}

// Display linked list
void display() {
    struct Node *temp;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    int choice, value, pos;

    while (1) {
        printf("\n--- Singly Linked List Insertions ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Specific Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                insertBeginning(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);

                insertEnd(value);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);

                printf("Enter position: ");
                scanf("%d", &pos);

                insertPosition(value, pos);
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}

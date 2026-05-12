#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *tail = NULL;

// Insert at beginning
void insertBeginning(int value) {
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    // If list is empty
    if (tail == NULL) {
        tail = newNode;
        tail->next = tail;
    }
    else {
        newNode->next = tail->next;
        tail->next = newNode;
    }

    printf("%d inserted at beginning\n", value);
}

// Insert at end
void insertEnd(int value) {
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    // If list is empty
    if (tail == NULL) {
        tail = newNode;
        tail->next = tail;
    }
    else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }

    printf("%d inserted at end\n", value);
}

// Insert at specific position
void insertPosition(int value, int pos) {
    struct Node *newNode, *temp;
    int i;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    // Insert at first position
    if (pos == 1) {
        if (tail == NULL) {
            tail = newNode;
            tail->next = tail;
        }
        else {
            newNode->next = tail->next;
            tail->next = newNode;
        }

        printf("%d inserted at position %d\n", value, pos);
        return;
    }

    temp = tail->next;

    for (i = 1; i < pos - 1 && temp != tail; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    // If inserted at last position
    if (temp == tail) {
        tail = newNode;
    }

    printf("%d inserted at position %d\n", value, pos);
}

// Display circular linked list
void display() {
    struct Node *temp;

    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = tail->next;

    printf("Circular Linked List: ");

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);

    printf("(Back to Head)\n");
}

int main() {
    int choice, value, pos;

    while (1) {

        printf("\n--- Circular Linked List Insertions ---\n");
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

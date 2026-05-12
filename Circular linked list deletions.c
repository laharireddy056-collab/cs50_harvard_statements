#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *tail = NULL;

// Insert node at end
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
}

// Delete from beginning
void deleteBeginning() {
    struct Node *temp;

    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = tail->next;

    // Only one node
    if (tail == temp) {
        printf("%d deleted from beginning\n", temp->data);

        free(temp);
        tail = NULL;
    }
    else {
        tail->next = temp->next;

        printf("%d deleted from beginning\n", temp->data);

        free(temp);
    }
}

// Delete from end
void deleteEnd() {
    struct Node *temp, *prev;

    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = tail->next;

    // Only one node
    if (tail == temp) {
        printf("%d deleted from end\n", tail->data);

        free(tail);
        tail = NULL;
        return;
    }

    while (temp->next != tail->next) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = tail->next;

    printf("%d deleted from end\n", temp->data);

    free(temp);
    tail = prev;
}

// Delete from specific position
void deletePosition(int pos) {
    struct Node *temp, *prev;
    int i;

    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = tail->next;

    // Delete first node
    if (pos == 1) {

        // Only one node
        if (tail == temp) {
            printf("%d deleted from position %d\n", temp->data, pos);

            free(temp);
            tail = NULL;
        }
        else {
            tail->next = temp->next;

            printf("%d deleted from position %d\n", temp->data, pos);

            free(temp);
        }

        return;
    }

    for (i = 1; i < pos && temp->next != tail->next; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (i != pos) {
        printf("Invalid Position\n");
        return;
    }

    prev->next = temp->next;

    // If deleting last node
    if (temp == tail) {
        tail = prev;
    }

    printf("%d deleted from position %d\n", temp->data, pos);

    free(temp);
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

        printf("\n--- Circular Linked List Deletions ---\n");
        printf("1. Insert Node\n");
        printf("2. Delete from Beginning\n");
        printf("3. Delete from End\n");
        printf("4. Delete from Specific Position\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                insertEnd(value);
                break;

            case 2:
                deleteBeginning();
                break;

            case 3:
                deleteEnd();
                break;

            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);

                deletePosition(pos);
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}

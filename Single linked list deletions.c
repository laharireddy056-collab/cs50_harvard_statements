#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

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
}

// Delete from beginning
void deleteBeginning() {
    struct Node *temp;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;

    printf("%d deleted from beginning\n", temp->data);

    free(temp);
}

// Delete from end
void deleteEnd() {
    struct Node *temp, *prev;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    // Only one node
    if (head->next == NULL) {
        printf("%d deleted from end\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    printf("%d deleted from end\n", temp->data);

    free(temp);
}

// Delete from specific position
void deletePosition(int pos) {
    struct Node *temp, *prev;
    int i;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;

    // Delete first node
    if (pos == 1) {
        head = temp->next;

        printf("%d deleted from position %d\n", temp->data, pos);

        free(temp);
        return;
    }

    for (i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid Position\n");
        return;
    }

    prev->next = temp->next;

    printf("%d deleted from position %d\n", temp->data, pos);

    free(temp);
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

        printf("\n--- Singly Linked List Deletions ---\n");
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

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int item;
    struct Node* link;
};

struct Node* head = NULL;

// Create node
struct Node* createNode(int item) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->item = item;
    newnode->link = NULL;
    return newnode;
}

// Insert at end
void insertAtEnd(int item) {
    struct Node* newnode = createNode(item);

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct Node* temp = head;
    while (temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = newnode;
}

// Insert at beginning
void insertAtBeg(int item) {
    struct Node* newnode = createNode(item);

    newnode->link = head;
    head = newnode;
}

// Delete at beginning
void deleteAtBeg() {
    if (head == NULL) {
        printf("List EMPTY\n");
        return;
    }

    struct Node* temp = head;
    printf("Removed: %d\n", temp->item);
    head = head->link;
    free(temp);
}

// Delete at end
void deleteAtEnd() {
    if (head == NULL) {
        printf("List EMPTY\n");
        return;
    }

    if (head->link == NULL) {
        printf("Removed: %d\n", head->item);
        free(head);
        head = NULL;
        return;
    }

    struct Node *temp = head, *prev = NULL;

    while (temp->link != NULL) {
        prev = temp;
        temp = temp->link;
    }

    printf("Removed: %d\n", temp->item);
    prev->link = NULL;
    free(temp);
}

// Delete by key
void deleteFromKey(int key) {
    if (head == NULL) {
        printf("List EMPTY\n");
        return;
    }

    struct Node *temp = head, *prev = NULL;

    // Key is at head
    if (head->item == key) {
        head = head->link;
        printf("Removed: %d\n", key);
        free(temp);
        return;
    }

    while (temp != NULL && temp->item != key) {
        prev = temp;
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("Key NOT found!\n");
        return;
    }

    prev->link = temp->link;
    printf("Removed: %d\n", key);
    free(temp);
}

// Search
void search(int key) {
    struct Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->item == key) {
            printf("Found %d at position %d\n", key, pos);
            return;
        }
        temp = temp->link;
        pos++;
    }

    printf("Not found!\n");
}

// Display
void Display() {
    if (head == NULL) {
        printf("List EMPTY\n");
        return;
    }

    struct Node* temp = head;
    printf("List: ");

    while (temp != NULL) {
        printf("%d ", temp->item);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    int choice, item, key;

    while (1) {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete at Beginning\n");
        printf("4. Delete at End\n");
        printf("5. Delete by Key\n");
        printf("6. Search\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &item);
                insertAtBeg(item);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &item);
                insertAtEnd(item);
                break;

            case 3:
                deleteAtBeg();
                break;

            case 4:
                deleteAtEnd();
                break;

            case 5:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteFromKey(key);
                break;

            case 6:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 7:
                Display();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

// Function to insert a node at the end
void insert(int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;  // circular link
    }
    else
    {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;  // link back to head
    }

    printf("%d inserted.\n", value);
}

// Function to delete a node by value
void deleteNode(int value)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    // Case 1: Only one node
    if (head->data == value && head->next == head)
    {
        free(head);
        head = NULL;
        printf("%d deleted.\n", value);
        return;
    }

    // Case 2: Deleting head node
    if (head->data == value)
    {
        while (temp->next != head)
            temp = temp->next; // reach last node

        temp->next = head->next;
        Node* del = head;
        head = head->next;
        free(del);
        printf("%d deleted.\n", value);
        return;
    }

    // Case 3: Deleting middle/last node
    prev = head;
    temp = head->next;
    while (temp != head)
    {
        if (temp->data == value)
        {
            prev->next = temp->next;
            free(temp);
            printf("%d deleted.\n", value);
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("%d not found.\n", value);
}

// Function to display the circular linked list
void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    Node* temp = head;
    printf("List: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Main function with menu
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insert(value);
            break;

        case 2:
            printf("Enter value: ");
            scanf("%d", &value);
            deleteNode(value);
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }
}

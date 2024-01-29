#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node** head, int new_data){

struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    new_node->next = *head;

    *head = new_node;
}

void deleteNode(struct Node** head,int key) {
    struct Node* temp = *head, *prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
}

void printList(struct Node* tnode) {
    while (tnode != NULL) {
        printf("%d", tnode->data);
        tnode = tnode->next;
    }
    printf("\n");

}


int main (int argc, char** argv)
{
   struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    printf("Created Linked list is:\n");
    printList(head);

    deleteNode(&head, 1);

    printf("Linked List after Deletion of 1:\n");
    printList(head);

    return 0;
}
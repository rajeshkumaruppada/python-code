#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *head = NULL;
typedef struct Node *node;

void insertAsHead(int value) {
    node new_node = (node)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
}

void insertAsRear(int value) {
    node new_node = (node)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
    }
    else {
        node ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new_node;
    }
}

void display(node ptr) {
    printf("->%d\t", ptr->data);
    if (ptr->next != NULL) 
        display(ptr->next);
}

void displayInRev(node ptr) {
    if (ptr->next != NULL) 
        displayInRev(ptr->next);
    printf("->%d\t", ptr->data);
}

int main() {
    insertAsRear(12);
    insertAsRear(13);
    insertAsRear(14);
    insertAsRear(15);
    display(head);
    displayInRev(head);
    return 0;
}
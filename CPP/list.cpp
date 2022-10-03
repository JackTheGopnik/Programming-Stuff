#include <bits/stdc++.h>
using namespace std;
// A linked list node
class Node
{
    public:
    int data;
    Node *next;
};
 
/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}
 

void insertAfter(Node* prev_node, int new_data)
{//prev_node is just a name i've given to the pointer, in theory this is a singly linked list.
    if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
 
/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    Node *last = *head_ref; 
    new_node->data = new_data;
    new_node->next = NULL; 
    if (*head_ref == NULL)//if list is empty, make the new node the head.
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)// Else traverse till the last node
    {
        last = last->next;
    } 
    last->next = new_node; //Change the next of last node
    return;
}

void printList(Node *node) //prints the list
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main()
{
    Node* head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);
    cout<<"Created Linked list is: ";
    printList(head);
    return 0;
}
 
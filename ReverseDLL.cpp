#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to reverse a Doubly Linked List
Node* reverseDLL(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node* prev = NULL;
    Node* current = head;

    while (current != NULL) {
        prev = current->prev;

        // Swap prev and next
        current->prev = current->next;
        current->next = prev;

        // Move to next node
        current = current->prev;
    }

    if (prev != NULL)
        head = prev->prev;

    return head;
}

// Insert node at beginning
Node* insert(Node* head, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
    return head;
}

// Print the list
void printList(Node* head)
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;

    // Create doubly linked list
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 2);
    head = insert(head, 1);

    cout << "Original Doubly Linked List:" << endl;
    printList(head);

    // Reverse the list
    head = reverseDLL(head);

    cout << "Reversed Doubly Linked List:" << endl;
    printList(head);

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// PUSH (insert at beginning)
void push(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// POP (remove from beginning)
int pop() {
    if (head == NULL) {
        cout << "List is empty\n";
        return -1;
    }

    Node* temp = head;
    int val = temp->data;
    head = head->next;
    delete temp;
    return val;
}

// Print Linked List
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Odd-Even Linked List function
Node* oddEvenList(Node* head) {

    if (head == NULL || head->next == NULL)
        return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even != NULL && even->next != NULL) {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
}

int main() {

    // Creating linked list using push
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);

    cout << "Original List:\n";
    printList(head);

    head = oddEvenList(head);

    cout << "After Odd-Even Rearrangement:\n";
    printList(head);

    // Example of pop
    cout << "Popped element: " << pop() << endl;

    cout << "List after pop:\n";
    printList(head);

    return 0;
}
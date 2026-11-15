class Solution {
  public:
    Node *deleteHead(Node *head) {
        // code here
        if(head == NULL)
        {
            return head;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};

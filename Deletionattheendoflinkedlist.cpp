class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == NULL)
        {
            return head;
        }
        
        if (head->next == NULL) 
        {
            delete head;
            return NULL;
        }
                
        Node* temp = head;
        
        while(temp->next->next !=NULL)
        {
            temp = temp -> next;
        }
        
        delete temp -> next;
        temp -> next = NULL;
        return head;
    }
};

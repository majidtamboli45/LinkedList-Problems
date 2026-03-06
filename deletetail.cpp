#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* deleteTail(Node* head){

    if(head==NULL || head->next==NULL)
        return NULL;

    Node* temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    delete temp->next;
    temp->next=nullptr;

    return head;
}

int main(){

    vector<int> arr={2,5,8,7};
    Node* head=convertArr2LL(arr);

    head=deleteTail(head);

    print(head);
}
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data1,Node*next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node * convertToLL(vector<int>&arr){
    Node * head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node (arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node * insertPosbyVal(Node * head,int val,int ele){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        return new Node(ele,head);
    }
    Node * temp = head;
    while(temp->next != NULL){
        if(temp->next->data == ele){
            Node * newNode = new Node(ele);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}






int main(){
    vector<int>arr = {1,2,3,4,5};
    Node * head = convertToLL(arr);

    // insertion at linkedlist
    insertPosbyVal(head,2,23);
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
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

Node * insertPos(Node * head, int k, int ele){
    if(head == NULL) {
        if(k == 1){
            return new Node(ele);
        }else{
            return NULL;
        }
    }
    if(k == 1){
        Node * temp = new Node(k);
         temp->next = head;
         head = temp;
    }
    int cnt = 0;
    Node * temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node *newNode = new Node(ele);
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
    insertPos(head,9,23);
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
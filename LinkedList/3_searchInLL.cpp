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

bool search(Node * head,int x){
    Node * temp = head;
    while(temp != nullptr){
        if(temp->data == x){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    Node * head = convertToLL(arr);
    cout<<search(head,5)<<endl;
    
}
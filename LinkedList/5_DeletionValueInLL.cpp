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

Node *removeVal(Node * head, int x){
    if(head == NULL)return head;
    if(head -> data = x){
        head = head->next;
        return head;
    }
    Node * prev = NULL;
    Node * temp = head;
    while(temp != NULL){
        if(temp->data == x){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}







int main(){
    vector<int>arr = {1,2,3,4,5};
    Node * head = convertToLL(arr);

    // remove operation
    head = removeVal(head,5);


    // print Operation
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
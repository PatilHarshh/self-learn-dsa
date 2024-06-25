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

Node * removek(Node * head, int k){
    // head is null
    if(head == NULL) return head;
    // if k = 1 delete first element only
    if(k == 1){
        Node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    // if k is in Between
    int cnt = 0;
    Node * prev = NULL;
    Node * temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
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
    head = removek(head,1);


    // print Operation
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
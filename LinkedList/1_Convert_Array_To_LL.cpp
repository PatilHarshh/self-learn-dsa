#include <iostream>
#include <vector>
using namespace std;

// syntax of creating the linkedlist

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// converting the Array to the Linked List

Node *convertToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    // Given Vector Array convert into the LinkedList
    vector<int> arr = {2, 3, 4, 5, 6};

    // creating a new node for the first element of array
    // Node *newNode = new Node(2, NULL);
    // cout << newNode->data << endl; // data
    // cout<<newNode<<endl; // address;

    Node *head = convertToLL(arr);
    // traverse
    Node *currNode = head;
    while (currNode != nullptr)
    {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
}
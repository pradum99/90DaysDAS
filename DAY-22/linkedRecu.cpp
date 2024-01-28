// Create Linked List using Recursion

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *Next;

    Node(int value)
    {
        data = value;
        Next = NULL;
    }
};

Node * createLinkedList(int arr[], int index, int size)
{
    if(index==size)
    return NULL;

    Node *Temp = new Node(arr[index]);
    Temp->Next = createLinkedList(arr, index+1, size);

    return Temp;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {2, 3, 5 ,6, 45, 76, 8};

    Head = createLinkedList(arr, 0, 7);

    Node *Temp = Head;
    while(Temp)
    {
        cout<<Temp->data<<" ";
        Temp = Temp->Next;
    }

return 0;
};
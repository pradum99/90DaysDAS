// Create Linked list add end using recursion

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

Node* createLinkedList(int arr[], int index, int size, Node * prev)
{
    if(index == size)
    return prev;

    Node *Temp = new Node(arr[index]);
    Temp->Next = prev;
    return createLinkedList(arr, index+1, size, Temp);
}

int main()
{
    int arr[] = {5, 3, 9, 7, 4, 1, 45};

    Node *Head = NULL;

    Head = createLinkedList(arr, 0, 7, NULL);

    Node *Temp = Head;
    while(Temp)
    {
        cout<<Temp->data<<" ";
        Temp = Temp->Next;

    }

return 0;
};
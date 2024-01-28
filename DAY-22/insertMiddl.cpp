// Create Linked list add Middle 

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

    Node *Temp1 = Head;

    int x = 3;   // Position
    int val = 30;
    x--;
    while(x--)
    {
        Temp1 = Temp1->Next;
    }

    Node *Temp2 = new Node(30);
    Temp2->Next = Temp1->Next;
    Temp1->Next = Temp2;

// Print 
    Node *Temp = Head;
    while(Temp)
    {
        cout<<Temp->data<<" ";
        Temp = Temp->Next;

    }

return 0;
};
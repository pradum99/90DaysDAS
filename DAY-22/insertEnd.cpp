// Insert arr element in linked list from end

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * Next;

    Node(int value)
    {
        data = value;
        Next = NULL;
    }
};

int main()
{
    int arr[] = {2, 5, 4, 3, 6, 9, 1, 4, 6};

    Node *Head = NULL;
    Node *Tail = NULL;

    for(int i=0; i<9; i++)
    {
        if(Head==NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->Next = new Node(arr[i]);
            Tail = Tail->Next;
        }
    }

    Node *Temp = Head;
    while(Temp != NULL)
    {
        cout<<Temp->data<<" ";
        Temp = Temp->Next;
    }

return 0;
};
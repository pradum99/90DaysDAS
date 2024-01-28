// Add element in end of the Linked List 


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

int main()
{
    int arr[] = {1, 4, 2, 63, 9, 78};
    Node *Head = NULL;

for(int i=0; i<6; i++)
{
    if(Head == NULL)
    {
        Head = new Node(arr[i]);
    }else
    {
        Node *Temp = Head;
        while(Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }
        Temp->Next = new Node(arr[i]);
    }
}

// Print 
Node *Temp = Head;
while(Temp)
{
    cout<<Temp->data<<" ";
    Temp= Temp->Next;
}
return 0;
};
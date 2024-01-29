// Delele Middle Node for Linked List

#include<iostream>
using namespace std;

class  Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head;
    Head = 0;

    int arr[] = {2, 2, 5, 7, 8, 9};
    for(int i=0; i<6; i++)
    {
        if(Head==NULL)
        {
            Head = new Node(arr[i]);
        }else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // Delete Middle Node

    int x = 3;
    x--;

    if(x==1)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }else
    {
        Node *curr = Head;
        Node * prev = NULL;
        while(x--)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    // Print 
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

return 0;
};
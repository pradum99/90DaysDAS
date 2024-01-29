// Delele Middle Node from Linked List using Recursion

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

Node * deleteNode(int arr[],Node * curr, int x)
{
    if(x==1)
    {
        Node *temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deleteNode(arr, curr->next, x-1);
    return curr;
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
    Node *curr = Head;
    deleteNode(arr, curr, x);

    // Print 
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

return 0;
};
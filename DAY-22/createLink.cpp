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

    int arr[] = {2, 5, 8, 6, 9};
    for(int i=0; i<5; i++)
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

    // Print 
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

return 0;
};
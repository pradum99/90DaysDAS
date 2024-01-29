// Delele Node from end of Linked List

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

    int arr[] = {2, 7, 8, 7, 3, 1, 5};
    for(int i=0; i<7; i++)
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

    // Delete last Node
    if(Head != NULL)
    {
        if(Head->next == NULL)
        {
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }else
        {
            Node *curr = Head;
            Node *prev = NULL;
            while(curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            delete curr;
        }
    };

    // Print 
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

return 0;
};
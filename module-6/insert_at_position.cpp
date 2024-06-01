#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;

    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_at_tail(node *&Head, int value)
{
    node *newnode = new node(value);
    if (Head == NULL)
    {
        Head = newnode;
        return;
    }
    node *tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void print_linked_list(node *Head)
{
    cout<<"Linked list:";
     node *tmp = Head;
     while(tmp!= NULL)
     {
        cout<<tmp->value<<" ";
        tmp=tmp->next;
     }
}
void insert_at_position(node * Head,int pos,int value)
{
    node *newnode = new node(value);
    node * tmp = Head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp =tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
int main()
{
    node *Head = NULL;
    cout <<endl<< "Option 1: Insert at tail" << endl;
    cout << "Option 2:print at linked list" << endl;
    cout << "Option 3:inserted value at position" << endl;
    cout << "Option 4: Terminate" << endl;
    while (true)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value: ";
            int val;
            cin >> val;
            insert_at_tail(Head, val);
        }
        else if(op==2)
        {
            print_linked_list(Head);
        }
        else if(op==3)
        {
            int pos,value;
            cout<<"Enter position: ";
            cin>>pos;
            cout<<"Enter value:";
            cin>>value;
            insert_at_position(Head,pos,value);
        }
        else if(op==4)
        {
            break;
        }
    }

    return 0;
}
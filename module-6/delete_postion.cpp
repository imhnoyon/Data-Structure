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

void insert_at_tail(node *&head, int value)
{
    node *newnode = new node(value);
    if (head == 0)
    {
        head = newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void print_at_tail(node *head)
{
    cout << "Print Linked list:: ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(node *head, int pos, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void insert_at_head(node *&head, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    newnode->next = head;
    head = newnode;
}
 void deleted_at_position(node *head,int pos)
 
 {
     node *tmp = head;
     for(int i=1;i<=pos-1;i++)
     {
        tmp = tmp->next;
     }

     node *deletenode = tmp->next;
     tmp->next= tmp->next->next;
     delete deletenode;
 }
 void deleted_at_head(node *&head)
 {
    node *deletehead=head;
    head=head->next;
    delete deletehead;
 }
int main()
{
    node *Head = NULL;
    while (true)
    {
        cout << "Option 1:Insert at tail" << endl;
        cout << "Option 2:Print Linked list" << endl;
        cout << "Option 3:Insert at postion and value" << endl;
        cout << "Option 4:Insert at Head" << endl;
        cout << "Option 5:Delete position" << endl;
         cout << "Option 6:Delete Head" << endl;
        cout << "Option 7:Tarminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter Value:: ";
            int value;
            cin >> value;
            insert_at_tail(Head, value);
        }
        else if (op == 2)
        {
            print_at_tail(Head);
        }
        else if (op == 3)
        {
            int pos, value;
            cout << "Enter Position::";
            cin >> pos;
            cout << "Enter value:: ";
            cin >> value;
            if (pos == 0)
            {
                insert_at_head(Head, value);
            }
            else
            {
                insert_at_position(Head, pos, value);
            }
        }
        else if (op == 4)
        {
            int value;
            cout << "Enter value::";
            cin >> value;
            insert_at_head(Head, value);
        }
        else if (op == 5)
        {
            int pos;
            cout<<"Enter position:: ";
            cin>>pos;
            if(pos==0)
            {
                deleted_at_head(Head);
            }
            else
            {
                deleted_at_position(Head,pos);
            }
        }
        else if(op==6)
        {
            deleted_at_head(Head);
        }
        else if(op==7)
        {
            break;
        }
    }
    return 0;
}
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
void insert_at_head(node *&head, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    newnode->next = head;
    head = newnode;
}
void print_at_tail(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void deleted_at_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            
            return; 
        }
    }
    if (tmp == NULL)
    {
        return ;
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    
}
void deleted_at_head(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *deletehead = head;
    head = head->next;
    delete deletehead;
}
int size(node * head)
{
    node * tmp = head;
    int count=0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    node *head = NULL;
    int x, value;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        cin >> value;
        if (x == 0)
        {
            insert_at_head(head, value);
            print_at_tail(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, value);
            print_at_tail(head);
        }
        else if (x == 2)
        {
            if(size(head) <= value)
            {
                print_at_tail(head);
            }
           else if(value == 0)
            {
                deleted_at_head(head);
                print_at_tail(head);
            }    
            else 
            {
                 deleted_at_position(head, value);
               print_at_tail(head);
            }
        }
        
       
    }
     

    return 0;
}
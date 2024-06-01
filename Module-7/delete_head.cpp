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
void delete_node(node *head, int pos)
{
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void print_linked_list(node *head)
{
    node *tmp = head;
    cout << "Print Linked List:: ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
int size(node *head)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_head(node * & head)
{
    node *newnode =head;
     head = head->next;
     delete newnode;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_linked_list(head);
    cout<<endl;
    int pos;
    cin>> pos;
    if(pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_node(head,pos);
    }
    print_linked_list(head);
   
    return 0;
}
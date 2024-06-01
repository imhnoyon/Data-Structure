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
void insert_at_position(node *head, int pos, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
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
    cout << endl;
    int pos, val;
    cin>>pos>>val;
    if(pos > size(head))
    {
      cout<<"Invalid Index";
    }
    else
    {
       insert_at_position(head, pos, val);
    }
     cout<<endl;
    print_linked_list(head);
   
    

    return 0;
}
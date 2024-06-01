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
void insert_tail(node *&head, node *&tail, int value)
{
    node *newnode = new node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_linked_list(node *head)
{
    node *tmp = head;
    cout << "Print Linked List:: ";
    while (tmp != NULL)
    {
        cout << tmp->value <<" ";
        tmp = tmp->next;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int value;
    cout << "Enter value to Linked List:: ";
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }
    for(node * i=head;i->next != NULL;i=i->next)
    {
       for(node * j=i->next;j!=NULL;j=j->next)
       {
          if(i->value > j->value)
          {
             swap(i->value,j->value);
          }
       }
    }
  print_linked_list(head);
    return 0;
}
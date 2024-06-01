#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node *prev;

    node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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
    newnode->prev = tail;
    tail = newnode;
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void sort(node *head)
{
   
  for(node *i=head;i->next !=NULL;i=i->next)
  {
    for(node * j=i->next;j!=NULL;j=j->next)
    {
        if(i->value >j->value)
        {
            swap(i->value,j->value);
        }
    }
  }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }
    sort(head);
    print(head);
    return 0;
}
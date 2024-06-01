#include<bits/stdc++.h>
using namespace std;
class node
 {
    public:
     int value;
     node* next;
     node * prev;

      node(int value)
      {
         this->value=value;
         this->next=NULL;
         this->prev = NULL;
      }
 };
 void delete_tail(node * &tail)
 {
     node * del = tail;
     tail = tail->prev;
     delete del;
     tail->next= NULL;
 }
 void print_Normal(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
   node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;
    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    print_Normal(head);
    print_reverse(tail);
    delete_tail(tail);
     print_Normal(head);
    print_reverse(tail);
  return 0;
}
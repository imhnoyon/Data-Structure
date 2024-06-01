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
 void insert_tail(node *&head,node *& tail,int value)
 {
    node *newnode = new node(value);
    if(tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

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
  
  node * head = NULL;
  node * tail = NULL;
  int val;
  cin>>val;
  insert_tail(head,tail,val);
  print_Normal(head);
  print_reverse(tail);
  
  return 0;
}
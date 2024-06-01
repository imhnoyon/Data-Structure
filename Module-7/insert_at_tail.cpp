#include<bits/stdc++.h>
using namespace std;
class node
 {
    public:
     int value;
     node* next;

      node(int value)
      {
         this->value=value;
         this->next=NULL;
      }
 };
 void insert_tail(node *&head,node *&tail,int value)
 {
     node *newnode = new node (value);
     if(head== NULL)
     {
        head= newnode;
        tail= newnode;
        return;
     }
     tail->next=newnode;
     tail=newnode;
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
   node *tail=d;
  print_linked_list(head);
  cout<<endl;
  int val;
  cin>>val;
  insert_tail(head,tail,val);
  print_linked_list(head);
  return 0;
}
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
 void insert_tail(node *& head,node *& tail,int value)
 {
     node *newnode = new node (value);
     if(head == NULL)
     {
        head = newnode;
        tail = newnode;
        return;
     }
     tail->next = newnode;
     tail=newnode;
 }
  void print_linked_list(node *head)
 {
     node *tmp = head;
     while(tmp != NULL)
     {
        cout<< tmp->value<<" ";
        tmp = tmp->next;
     }
     cout<<endl;
 }
int main()
{
  node * head = NULL;
  node *tail =NULL;
  int value;
  cout<<"Enter value to Linked List:: ";
  while(true)
  {
     cin>>value;
     if(value == -1)break;
     insert_tail(head,tail,value);
   
  }
   print_linked_list(head);
  return 0;
}
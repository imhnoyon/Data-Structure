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
 void insert_at_tail(node *&head,int value)
 {
    node *newnode = new node (value);
     if(head == NULL)
     {
        head = newnode;
        return;
     }
     node *tmp =head;
     while(tmp->next != NULL)
     {
         tmp = tmp->next;
     }
     tmp->next = newnode;
 }
 void print(node *head)
 {
    
       int count=0;
     node *tmp = head;
     while(tmp != NULL)
     {
        count++;
         tmp = tmp->next;
     }
     cout<<"Count number: ";
     cout<<count;
     
 }
int main()
{
  node *head =NULL;
  int val;
  while(true)
  {
     cin>>val;
     if(val == -1) break;
     insert_at_tail(head,val);
  }
  print(head);
  return 0;
}
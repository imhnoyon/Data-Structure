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
     if(head == NULL)
     {
        head = newnode;
        tail = newnode;
     }
     tail->next = newnode;
     tail = newnode;
 }
 int size(node *head)
 {
    int count=0;
    node *tmp =head;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
     return count;
 }
int main()
{
    node *head =NULL;
    node *tail = NULL;
    node *head1 = NULL;
    node *tail1 = NULL;
  while(true)
  {
     int value;
     cin>> value;
     if(value == -1)
     {
        break;
     }
     insert_tail(head,tail,value);
     
  }
   while(true)
  {
     int value;
     cin>> value;
     if(value == -1)
     {
        break;
     }
     insert_tail(head1,tail1,value);
     
  }
  if(size(head)==size(head1))
  {
      cout<<"YES"<<endl;
  }
  else 
  {
     cout<<"NO"<<endl;
  }
  
  return 0;
}
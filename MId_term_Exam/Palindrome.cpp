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
    newnode->prev=tail;
    tail=newnode;
}
int main()
{
  node *head=NULL;
  node *tail =NULL;
  int value;
  while(true)
  {
     cin>>value;
     if(value == -1)
     break;
     insert_tail(head,tail,value);
  }
  node *tmp=head;
  node *tmp2=tail;
  int cnt=0;
   while(tmp !=tmp2)
   {
      if(tmp->value != tmp2->value)
      {
        cnt=1;
        break;
      }
      tmp=tmp->next;
      tmp2=tmp2->prev;
   }
   if(cnt==1)
   {
     cout<<"NO"<<endl;
   }
   else
   {
     cout<<"YES";
   }
  
  return 0;
}
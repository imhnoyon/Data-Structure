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
 void insert_tail(node *&head,int value)
 {
    node *newnode = new node (value);
     if(head == NULL)
     {
        head = newnode;
        return;
     }
     node *tmp = head;
     while(tmp->next != NULL)
     {
        tmp = tmp->next;
     }
     tmp->next = newnode;
 }
 void display(node *head)
 {
    node *tmp =head;
    int mx=INT_MIN;
    while(tmp->next != NULL)
    {
        mx=max(tmp->value,mx);
        tmp =tmp->next;
    }
    mx=max(tmp->value,mx);
    cout<<mx;
    
 }
int main()
{
   node *head = NULL;
    while(true)
   {
     int value;
     cin>> value;
     if(value == -1)
     {
        break;
     }
     insert_tail(head,value); 
   }
    display(head);
  return 0;
}
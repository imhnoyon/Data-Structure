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
    node * newnode = new node (value);
    if (head == NULL)
    {
        head = newnode ;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
 }
 void display(node * head)
 {
     node * tmp = head;
      node * tmp2;
      node * dubble;
     while(tmp->next != NULL && tmp != NULL)
     {
        tmp2 = tmp;
        while(tmp2 ->next != NULL)
        {
            if(tmp->value == tmp2->next->value)
            {
                dubble = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete dubble;   
            } 
            else 
            {
            tmp2= tmp2->next;
            }
            
        }
         
        tmp=tmp->next;   
        cout<<tmp->value<<" "; 
     }  
     
 }
int main()
{

    node * head = NULL;
    node * tail = NULL;

    int value;
    while(true)
    {
        cin>>value;
        if(value == -1)
        {
            break;
        }
        insert_tail(head,tail,value);
    }
  display(head);

  return 0;
}
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
int main()
{
   node * head = new node (10);
   node * a = new node (20);
   node * b = new node (30);
   node * c = new node (40);
   node *d =new node (50);
  
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
 
   node * tmp =head;
   while(tmp != NULL)
   {
      cout<<tmp->value<<endl;
      tmp=tmp->next;
   }

  return 0;
}


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
  node * a = new node(20);
  head->next= a;

  cout<<head->value<<endl;
  cout<<head->next->value<<endl;
  cout<<(*(*head).next).value<<endl; // longcut way
  return 0;
}
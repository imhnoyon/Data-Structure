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
    node a(10);
    node b(20);
    a.next=&b;

    cout<<a.value<<endl;
    cout<<a.next->value<<endl;// shortcut way
    // cout<<(*a.next).value<<endl;// longcut way
  
  return 0;
}
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
  node *head=NULL;
  node *tail=NULL;
  list<int>link_list;
  int value;
  while(true)
  {
    cin>>value;
    if(value==-1) break;
    link_list.push_back(value);
  }
  link_list.sort();
  link_list.unique();
  for(auto i:link_list)
  {
    cout<<i<<" ";
  }
  
  return 0;
}
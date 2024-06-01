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
 void insert(node *&head,int value)
 {
     node *newnode = new node (value);
     if(head == NULL)
     {
        head = newnode;
        return;
     }
     node * tmp = head;
     while(tmp->next !=NULL)
     {
        tmp = tmp->next;
     }
     tmp->next = newnode;
 }
 void display(node *head,int n)
 {
    node *tmp = head;
    node *tmp2 = head->next;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(tmp->value > tmp2->value)
           {
              cout<<"NO"<<endl;
              return;
           }
           tmp2=tmp2->next;
        }
     tmp =tmp->next;
     tmp2 =tmp->next;
    }
    cout<<"YES";
 }
//  while(tmp->next!=NULL){
// if(tmp->value > tmp->next->value){
// return false
// }
// tmp  = tmp->next;
// }
int main()
{
  node *head= NULL;
  int cnt=0;
  while(true)
  {
    int val;
    cin>>val;
    if(val == -1)
    {
        break;
    }
    cnt++;
    insert(head,val);
  }
  display(head,cnt);
  return 0;
}
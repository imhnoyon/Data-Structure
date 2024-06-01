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
class myStack
{
    public:
    node *head =NULL;
    node *tail =NULL;
    int sz=0;
    void push(int val)
    {   sz++;
        node *newnode =new node (val);
        if(head == NULL)
        {
            head =newnode;
            tail =newnode;
            return ;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail = newnode;
    }
    void pop()
    {   sz--;
        node *del =tail;
        tail = tail->prev;
        if(tail== NULL)
        {
            head = NULL;
        }
        delete del;
    }
    int top()
    {
       return tail->value;
    }
    int size()
    {
       return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};
int main()
{
  myStack st;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
     int x;
     cin>>x;
     st.push(x);
  }
  while(st.empty()== false)
  {
     cout<< st.top() <<" ";
     st.pop();
  }
  return 0;
}
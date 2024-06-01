#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int> link_list;
    void push(int val)
    {
        link_list.push_back(val);
    }
    void pop()
    {
        link_list.pop_back();
    }
    int top()
    {
       return link_list.back();
    }
    int size()
    {
       return link_list.size();
    }
    bool empty()
    {
        if(link_list.size()==0) return true;
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
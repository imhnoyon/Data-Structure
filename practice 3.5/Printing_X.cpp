#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int s=3;
  int k;
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<s;j++)
     {
        cout<<" ";
     }
     for(int j=0;j<k;j++)
     {
        cout<<"\\";
     }
     s--;
     k++;
  }
  return 0;
}
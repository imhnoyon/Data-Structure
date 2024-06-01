#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+i;j<n;j++)
    {
       if(ar[i]==ar[j])
       {
           cout<<ar[i]<<" ";
       }
    }
  }
  return 0;
}
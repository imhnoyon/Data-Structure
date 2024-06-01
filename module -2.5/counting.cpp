#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int cnt[26]={0};
  for(int i=0;i<s.size();i++)
  {
    int value=s[i]-'a';
    cnt[value]++;
    
  }
  for(int i=0;i<26;i++)
  {
    // while(cnt[i]>0)
    // {
    //     char ch=i+'a';
    //     cout<<ch;
    //     cnt[i]--;
    // }

    char ch=i+'a';
    if(cnt[i]!=0)
    {
        cout<<ch<<" - "<<cnt[i]<<endl;
    }
  }
   
  return 0;
}
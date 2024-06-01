#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node *prev;

    node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(node *&head, node *&tail, int value)
{
    node *newnode = new node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void palindrome(node *head,node *tail)
{
   node *i = head;
   node *j = tail;
   int cnt =1;
   while(i!=j)
   {
      if(i->value != j->value)
      {
         cnt =0;
         break;
      }
      i=i->next;
      j=j->prev;
   }
   if(cnt==0)
   {
     cout<<"NO";
   }
   else
   {
     cout<<"YES";
   }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }
    palindrome(head,tail);
    return 0;
}
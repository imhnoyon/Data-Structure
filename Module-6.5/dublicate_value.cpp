#include <bits/stdc++.h>
using namespace std;
class node
{
public:
   int value;
   node *next;

   node(int value)
   {
      this->value = value;
      this->next = NULL;
   }
};
void insert_at_tail(node *&head, int value)
{
   node *newnode = new node(value);
   if (head == NULL)
   {
      head = newnode;
      return;
   }
   node *tmp = head;
   while (tmp->next != NULL)
   {
      tmp = tmp->next;
   }
   tmp->next = newnode;
}
void print(node *head, int n)
{
   int cnt = 0;
   node *tmp = head;
   node *tmp2 = head->next;
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (tmp->value == tmp2->value)
         {
           cout<<"YES";
            return;
         }
         tmp2 = tmp2->next;
      }
      tmp = tmp->next;
      tmp2 = tmp->next;
   }
 cout<<"NO";

}
int main()
{
   node *head = NULL;
   int val, count = 0;
   while (true)
   {

      cin >> val;
      if (val == -1)
         break;
      count++;
      insert_at_tail(head, val);
   }
   print(head, count);
   return 0;
}
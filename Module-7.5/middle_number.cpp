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
void insert_tail(node *&head,node *&tail, int value)
{
   node *newnode = new node(value);
   if (head == NULL)
   {
      head = newnode;
      tail = newnode;
      return;
   }
   tail->next= newnode;
   tail = newnode;

}
int sized(node *head)
{
   int count = 0;
   node *tmp = head;
   while (tmp != NULL)
   {
      count++;
      tmp = tmp->next;
   }
   return count;
}
int main()
{
   node *head = NULL;
   node * tail =NULL;
   while (true)
   {
      int value;
      cin >> value;
      if (value == -1)
      {
         break;
      }
      insert_tail(head,tail, value);
   }
   int mid = sized(head) / 2;
   node *tmp = head; 
   for (int i = 0; i < mid-1; i++)
   {
      tmp = tmp->next;
   }
   if (sized(head) % 2 == 1)
   {
      
      cout << tmp->value;
   }
   else
   {
      cout << tmp->value << " " << tmp->next->value << endl;
   }
   return 0;
}
#include <bits/stdc++.h>
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
void insert(node *&head,node *&tail, int value)
{
    node *newnode = new node(value);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
   tail->next = newnode;
   newnode->prev = tail;
   tail = newnode;
   
}
void print_Normal(node *tail)
{
    node *tmp = tail;
    cout << "Print Normal Doubly Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void cycle(node *head)
{
    node *fast = head;
    node *slow = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Cycle detected";
    }
    else
    {
        cout << "Cycle not detected";
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
        {
            break;
        }
        insert(head,tail, value);
    }
    tail->next = head;
    head->prev =tail;
    // print_Normal(tail);
    cycle(head);
    
    return 0;
}
 
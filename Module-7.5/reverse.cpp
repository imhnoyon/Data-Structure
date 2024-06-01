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
void insert_tail(node *&head,int value)
 {
    node *newnode = new node (value);
     if(head == NULL)
     {
        head = newnode;
        return;
     }
     node *tmp = head;
     while(tmp->next != NULL)
     {
        tmp = tmp->next;
     }
     tmp->next = newnode;
 }
 void reverse(node *n)
 {
    if(n == NULL) return;
     reverse(n->next);
     cout<<n->value<<" ";
 }
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
       insert_tail(head,value);
    }
     reverse(head);
    return 0;
}
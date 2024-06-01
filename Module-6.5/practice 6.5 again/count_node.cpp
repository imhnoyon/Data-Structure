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
void insert_at_tail(node *&head, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
int main()
{
    node *head = NULL;
    int val;
   
    while (true)
    {
         cin >> val;
        if (val != -1)
        {
            insert_at_tail(head, val);
        }
        else
        {
            break;
        }
    }
    node *tmp = head;
    int cnt=0;
    while (tmp != NULL)
    {
        // cout << tmp->value << " ";
        cnt++;
        tmp = tmp->next;
    }

    cout<<cnt<<endl;
    return 0;
}
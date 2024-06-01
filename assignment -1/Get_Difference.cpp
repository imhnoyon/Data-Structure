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
    tail = newnode;
}
void display(node *head)
{
    node *tmp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while (tmp != NULL)
    {
        mx = max(tmp->value, mx);
        mn = min(tmp->value, mn);
        tmp = tmp->next;
    }
    int diff;
    diff = mx - mn;
    cout << diff;
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
        insert_tail(head, tail, value);
    }
    display(head);
    return 0;
}
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
void insert_at_head(node *&head, node *&tail, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_at_position(node *head, int pos, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}
void print2(node *tail)
{
    node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void print(node *head)
{
    node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int x, v;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)

    {
        cin >> x;
        cin >> v;
        if (size(head) < x)
        {
            cout << "Invalid" << endl;
        }
        else if (size(head) == x)
        {
            insert_tail(head, tail, v);
            print(head);
            print2(tail);
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
            print(head);
            print2(tail);
        }
        else
        {
            insert_at_position(head, x, v);
            print(head);
            print2(tail);
        }
    }
    return 0;
}
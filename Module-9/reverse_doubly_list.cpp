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
void insert(node *&head, node *&tail, int value)
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
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void Reverse(node *head, node *tail)
{
    node *i = head;
    node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
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
        insert(head, tail, value);
    }
    Reverse(head, tail);
    print(head);
    return 0;
}
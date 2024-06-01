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
void print_Normal(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    node *head = new node(10);
    node *b = new node(20);
    node *c = new node(30);

    head->next = b;
    b->prev = head;
    b->next = c;
    c->prev = b;
    node *tail = c; // tail track rakhsi c node a

    print_Normal(head);
    print_reverse(tail);
    return 0;
}
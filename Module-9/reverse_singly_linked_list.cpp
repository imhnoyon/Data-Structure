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
void Reverse(node *&head, node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    Reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);

    head->next = a;
    a->next = b;

    Reverse(head, head);
    print(head);
    return 0;
}
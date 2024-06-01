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
void insert(node *&head, int value)
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
void display(node *head, int n)
{
    node *tmp = head;
    int mid = n/2;
    for (int i = 0; i < mid-1; i++)
    {
        tmp = tmp->next;
    }
    if (mid % 2 == 0)
    {
        tmp =tmp->next;
       cout << tmp->value << endl;   
    }
    else
    {
       cout << tmp->value << " " << tmp->next->value << endl;
    }
}

int main()
{
    node *head = NULL;
    int size, count = 0;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        count++;
        insert(head, val);
    }
    display(head, count);

    return 0;
}

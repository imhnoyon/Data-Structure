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
int size(node *head)
{
    node *tmp = head;
    int count = 0;
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
    node *tail = NULL;
    node *head2 = NULL;
    node *tail2 = NULL;
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
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val);
    }
    node *tmp = head;
    node *tmp2 = head2;
    int cnt = 0;
    if (size(head) == size(head2))
    {
        for (int i = 0; i < size(head); i++)
        {
            if (tmp->value != tmp2->value)
            {
                cnt = 1;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        if (cnt == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
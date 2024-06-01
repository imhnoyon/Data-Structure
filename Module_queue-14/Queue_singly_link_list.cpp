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
class myQueue
{
public:
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        node *newnode = new node(value);
        if (tail == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        node *del = head;
        head = head->next;
        delete del;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
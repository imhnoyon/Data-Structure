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
class myStack
{
public:
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        node *newnode = new node(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        node *del = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        delete del;
    }
    int top()
    {
        return tail->value;
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
    myStack q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    myStack q2;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        q2.push(val);
    }
    int cnt = 0;
    if (q2.size() == q.size())
    {
        while (!q.empty())
        {
            if (q.top() != q2.top())
            {
                cnt = 1;
                break;
            }
            q.pop();
            q2.pop();
        }
        if (cnt == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

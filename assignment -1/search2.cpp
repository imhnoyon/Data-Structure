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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        node *head = NULL;
        node *tail = NULL;
        int value;
        int x;
        while (true)
        {
            cin >> value;
            if (value == -1)
            {
                break;
            }
            insert_tail(head, tail, value);
        }

        //
        cin >> x;
        node *tmp = head;
        int sz = size(head);
        int cnt = 0;
        int pos =0;
        while(tmp !=NULL)
        {
            if(tmp->value == x)
            {
                cnt ++;
                break;
            }
            pos++;
            
        }
        tmp=tmp->next;

        if (cnt == 0)
        {
            cout << -1;
        }
        else
        {
            cout<<cnt;
        }
    }

    return 0;
}

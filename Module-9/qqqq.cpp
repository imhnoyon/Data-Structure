#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int size(node *head)
{
    node *tmp = head;
    int siz = 0;
    while (tmp != NULL)
    {
        siz++;
        tmp = tmp->next;
    }
    return siz;
}
void insert_head(node *&head, int v)
{
    node *newnode = new node(v);
    node *tmp = head;
    newnode->next = head;
    head = newnode;
}
void insert_tail(node *&head, int v)
{
    node *tmp = head;
    node *newnode = new node(v);
    if (head == NULL)
    {
        head->next = newnode;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void delete_head(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *deletenode = head;
    head = head->next;
    delete deletenode;
}
void delete_node(node *&head, int v)
{
    node *tmp = head;
    for (int i = 0; i < v - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void printlist(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, v);
            printlist(head);
        }
        else if (x == 1)
        {
            insert_tail(head, v);
            printlist(head);
        }
        else if (x == 2)
        {
            if (size(head) <= v)
            {
                printlist(head);
            }
            else if (v == 0)
            {
                delete_head(head);
                printlist(head);
            }

            else
            {
                delete_node(head, v);
                printlist(head);
            }
        }
    }
    return 0;
}
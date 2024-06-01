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

void print2(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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
int size2(node *head)
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
    node *head1 = NULL;
    node *tail1 = NULL;
   
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head1, tail1, value);
    }
     node *tmp = head1;
    node *head2 = NULL;
    node *tail2 = NULL;
   
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head2, tail2, value);
    }
     node *tmp2 = head2;
    if (size(head1) != size2(head2))
    {
        cout << "NO";
    }
    else if (size(head1) == size2(head2))
    {
        int cnt = 1;

        while (tmp != NULL)
        {
            if (tmp->value != tmp2->value)
            {
                cnt = 0;
                break;
            }

            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        if (cnt == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}
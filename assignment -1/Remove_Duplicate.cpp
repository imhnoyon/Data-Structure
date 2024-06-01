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
void print_linked_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void dublicate(node *head)
{
    node *tmp = head;
    
    while (tmp != NULL )
    {
        node *tmp2 = tmp;
        while (tmp2->next != NULL)
        {
            if (tmp->value == tmp2->next->value)
            {
                node *del = tmp2->next;
                tmp2->next = del->next;
                delete del;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;
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
            break;
        insert_tail(head, tail, value);
    }
    dublicate(head);

    print_linked_list(head);

    return 0;
}

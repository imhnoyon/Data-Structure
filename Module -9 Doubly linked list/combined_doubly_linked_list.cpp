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
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void print_Normal(node *head)
{
    node *tmp = head;
    cout << "Print Normal Doubly Linked List: ";
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
    cout << "Print Reverse Doubly Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_position(node *head, int pos, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}
void insert_at_head(node *&head, node *&tail, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void deleted_at_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    node *del = tmp->next;
    tmp->next = tmp->next->next;
    if (del->next != NULL)
    {
        del->next->prev = tmp;
    }
    delete del;
}
void deleted_at_head(node *&head)
{
    node *del = head;
    head = head->next;
    delete del;
    head->prev = NULL;
}
void delete_at_tail(node *&tail)
{
    node *del = tail;
    tail = tail->prev;
    delete del;
    tail->next = NULL;
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
    int value;
    while (true)
    {
        cout << "Option 1:Insert at tail" << endl;
        cout << "Option 2:Print Linked list" << endl;
        cout << "Option 3:Insert at postion and value" << endl;
        cout << "Option 4:Insert at Head" << endl;
        cout << "Option 5:Delete position" << endl;
        cout << "Option 6:Tarminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int value;
            cout << "Enter value:: ";
            cin >> value;
            insert_tail(head, tail, value);
        }
        else if (op == 2)
        {
            print_Normal(head);
            print_reverse(tail);
        }
        else if (op == 3)
        {
            int pos, value;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;
            insert_at_position(head, pos, value);
        }
        else if (op == 4)
        {
            int value;
            cout << "Ente value: ";
            cin >> value;
            insert_at_head(head, tail, value);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                deleted_at_head(head);
            }
            else if (pos >= size(head))
            {
                delete_at_tail(tail);
            }
            else
            {
                deleted_at_position(head, pos);
            }
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}
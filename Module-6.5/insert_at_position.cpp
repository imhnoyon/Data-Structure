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
void display(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(node *head, int pos, int value)
{
    node *newnode = new node(value);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
   display(head);
}

int main()
{
    node *head = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert(head, value);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, value;
        cin >> pos >> value;
        if (value == -1)
            break;
         
        insert_at_position(head, pos, value);
    }
    
    return 0;
}
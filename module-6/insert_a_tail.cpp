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
void insert_a_tail(node *&head, int value)
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
    // tmp ekhn last node a ache

    tmp->next = newnode;
}
void print_linked_list(node *head)
{
    cout << "Linked list:: ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
int main()
{
    node *head = NULL;
    while (true)
    {
        cout << "\nOption 1:Insert a tail" << endl;
        cout << "Option 2:Print linked list" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value::";
            int val;
            cin >> val;
            insert_a_tail(head, val);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}
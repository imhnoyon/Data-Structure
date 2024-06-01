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
void Insert_at_tail(node *&head, int value)
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
void print_linked_list(node *head)
{
    cout << "Print Linked list:: ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp =tmp->next;
    }
    cout<<endl;
}
int main()
{
    node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1) break;
        Insert_at_tail(head, value);
    }
    print_linked_list(head);
    return 0;
}
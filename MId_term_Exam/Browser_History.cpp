#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    string value;
    node *next;
    node *prev;

    node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(node *&head, node *&tail, string value)
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
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    string t = "end";
    string value;
    while (true)
    {
        cin >> value;
        if (value == t)
            break;
        insert_tail(head, tail, value);
    }
    //   print(head);
    int q;
    cin >> q;
    node *current = head;
    while (q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "visit")
        {
            string n;
            cin >> n;
            node *tmp = head;
            while (tmp != NULL)
            {
                if (tmp->value == n)
                {
                    cout << n << endl;
                    current = tmp;
                    break;
                }
                else if (tmp->next == NULL)
                {
                    cout << "Not Available" << endl;
                }
                tmp = tmp->next;
            }
        }
        else if (cmd == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->value << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
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
    list<int> mylist;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        mylist.push_back(value);
    }
    node *tmp = head;
    
    mylist.sort();
    for(auto i:mylist)
    {
        cout<<i<<" ";
    }
    // print(head);
    return 0;
}
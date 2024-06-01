#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_head(Node *&head,int v)
{
    Node * newnode = new Node (v);
     Node * tmp =head;
    newnode->next = head;
    head = newnode;
}
void insert_tail(Node *&head , int v)
{
    
    Node *newnode = new Node(v);
     Node * tmp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void delete_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) return;
    }
    if (tmp == NULL) return;
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void delete_node(Node *head, int pos)
{
    if (head == NULL)
        return;

    Node *deletehead = head;
    head = head->next;
    delete deletehead;
}

int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head,v);
             print_linked_list(head);
        }

        else if (x == 1)
        {
            insert_tail(head, v);
             print_linked_list(head);
        }

        else if (x == 2)
        {
            if (size(head) <= v)
            {
                print_linked_list(head);
            }
            else if (v == 0)
            {
                delete_node(head, v);
                print_linked_list(head);
            }
            else
            {
                 delete_position(head, v);
                  print_linked_list(head);
            }
        }
    }

    return 0;
}
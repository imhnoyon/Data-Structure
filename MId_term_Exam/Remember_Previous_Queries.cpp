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
    list<int> linked_list;
    int x, value;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> value;
        if (x == 0)
        {
            linked_list.push_front(value);
            cout<<"L -> ";
            for (auto i : linked_list)
            {
                cout << i << " ";
            }
            cout << endl;
            linked_list.reverse();
             cout<<"R -> ";
            for (auto i : linked_list)
            {
                cout << i << " ";
            }
            cout<<endl;
            linked_list.reverse();
        }
        else if (x == 1)
        {
            
            linked_list.push_back(value);
             cout<<"L -> ";
            for (auto i : linked_list)
            {
                cout << i << " ";
            }
            cout << endl;

            linked_list.reverse();
            cout<<"R -> ";
            for (auto i : linked_list)
            {
                cout << i << " ";
            }
            cout<<endl;
            linked_list.reverse();
        }
        else if (x == 2)
        {
            if (linked_list.size() <= value)
            {
                cout<<"L -> ";
                for (auto i : linked_list)
                {
                    cout << i << " ";
                }
                cout << endl;
                linked_list.reverse();
                 cout<<"R -> ";
                for (auto i : linked_list)
                {
                    cout << i << " ";
                }
                cout<<endl;
                linked_list.reverse();
            }
            else if (value == 0)
            {
                linked_list.pop_front();
                cout<<"L -> ";
                for (auto i : linked_list)
                {
                    cout << i << " ";
                }
                cout << endl;
                linked_list.reverse();
                 cout<<"R -> ";
                for (auto i : linked_list)
                {
                    cout << i << " ";
                }
                cout<<endl;
                linked_list.reverse();
            }
            else
            {

                linked_list.erase(next(linked_list.begin(), value));
                cout<<"L -> ";
                for (auto i : linked_list)
                {
                    cout << i << " ";
                }
                cout << endl;
                linked_list.reverse();
                 cout<<"R -> ";
                for (auto i : linked_list)
                {
                    cout << i << " ";
                }
                cout<<endl;
                linked_list.reverse();
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;
    node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

node *input_tree()
{
    int val;
    cin >> val;
    node *root;
    if (val == -1)
        return root = NULL;
    else
        root = new node(val);
    queue<node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        node *myleft;
        node *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    node *root = input_tree();
    int x;
    cin >> x;
     int cnt=0;
    queue<pair<node *, int> > q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<node *, int> p = q.front();
        node * n = p.first;
        int level = p.second;
        q.pop();
       
        if (level == x)
        {
            cout << n->value<<" ";
            cnt=1;
        }
       
        if (n->left)
            q.push({n->left, level + 1});
        if (n->right)
            q.push({n->right, level + 1});
    }
    if(cnt==0) cout<<"Invalid";
    return 0;
}
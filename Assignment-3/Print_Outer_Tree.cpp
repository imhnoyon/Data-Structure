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

void printleft(node *root)
{
    if (root->left != NULL)
    {
        printleft(root->left);
        cout << root->left->value << " ";
    }
    else if (root->right != NULL)
    {
        printleft(root->right);
        cout << root->right->value << " ";
    }
}

void printright(node *root)
{
    if (root->right != NULL)
    {
        cout << root->right->value << " ";
        printright(root->right);
    }
    else if (root->left != NULL)
    {
        cout << root->left->value << " ";
        printright(root->left);
    }
}
int main()
{
    node *root = input_tree();

    if (root->left != NULL)
        printleft(root);
    cout << root->value << " ";
    if (root->right != NULL)
        printright(root);

    return 0;
}

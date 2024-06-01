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
node *input_binaryTree()
{
    int val;
    cin >> val;
    node *root;
    if (val == -1)
        root = NULL;
    else
        root = new node(val);

    queue<node *> q;

    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        node *newleft;
        node *newright;
        if (l == -1)
            newleft = NULL;
        else
            newleft = new node(l);
        if (r == -1)
            newright = NULL;
        else
            newright = new node(r);

        p->left = newleft;
        p->right = newright;

        // children gulu ke push kora

        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}
void levelorder(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();

        cout << f->value << " ";

        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    node *root = input_binaryTree();
    levelorder(root);

    return 0;
}
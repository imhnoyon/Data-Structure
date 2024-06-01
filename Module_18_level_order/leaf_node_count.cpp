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

        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}
int leaf_count(node *root)
{
    if (root == NULL)
        return 0;
    if(root->left ==NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l=leaf_count(root->left);
        int r=leaf_count(root->right);
        return l+r;
    }
}
int main()
{
    node *root = input_tree();
    int cnt = leaf_count(root);
    cout << cnt;
    return 0;
}
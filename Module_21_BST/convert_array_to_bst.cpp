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
node *convert(int ar[], int n, int l, int r)
{
    if(l > r) return NULL;
    int mid = (l + r) / 2;
    node *root = new node(ar[mid]);
    node *rootleft = convert(ar, n, l, mid - 1);
    node *rootright = convert(ar, n, mid + 1, r);
    root->left = rootleft;
    root->right = rootright;
    return root;
}
void levelOrder(node *root)
{
    queue<node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        node *p = q.front();
        q.pop();

        cout << p->value << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    node *root = convert(ar, n, 0, n - 1);
    levelOrder(root);

    return 0;
}
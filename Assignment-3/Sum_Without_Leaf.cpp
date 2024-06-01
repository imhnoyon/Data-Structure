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
node* input_tree()
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
int sum(node * root)
{
    if(root == NULL) return 0;
    
    if(root->left == NULL && root->right == NULL)
    {
       return 0;
    }
    
      int  l=sum(root->left);
      int  r=sum(root->right);
    
    return l+r+root->value;
}

int main()
{
    node * root= input_tree();

   int count= sum(root);
   cout<<count;

    return 0;
}
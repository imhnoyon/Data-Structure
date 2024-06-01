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
int max_height(node * root)
{
    if(root == NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);

      
     return max(l,r)+1;

    // int sum=(pow(2,mx)-1);
    
}

int nodes_count(node* root)
{
    if(root == NULL) return 0;
    int l= nodes_count(root->left);
    int r=nodes_count(root->right);
    return l+r+1;
}
int main()
{
    node * root= input_tree();

    int count= max_height(root);
    int sum=pow(2,count)-1;

    int nodes=nodes_count(root);

    if(sum == nodes) cout<<"YES"<<endl;
    else cout<<"NO";

    return 0;
}
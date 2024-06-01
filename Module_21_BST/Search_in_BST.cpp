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
    int x;
    cin>>x;
    node* root=  new node(x);
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

bool search(node * root,int x)
{
    if(root == NULL) return false;
    if(root->value == x) return true;
    if(x < root->value)
    {
        return search(root->left,x);
    }
    else {
        return search(root->right,x);
    }
}
int main()
{
    node* root= input_tree();
    // levelOrder(root);
   if(search(root,16))
   {
      cout<<"YES found it"<<endl;
   }
   else
   {
     cout<<"NO not founded"<<endl;
   }

    return 0;
}
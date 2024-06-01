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

void insert(node* &root,int x)
{
    if(root == NULL)
    {
         root= new node(x);
         return;
    }
     if(x<root->value)
     {
         if(root->left == NULL)
         {
             root->left=new node(x);
         }
         else
         {
             insert(root->left,x);
         }
     }
     else
     {
         if(root->right == NULL)
         {
             root->right=new node(x);
         }
         else
         {
             insert(root->right,x);
         }
     }
}
int main()
{
    node* root= input_tree();
    // levelOrder(root);
   insert(root,5);
    levelOrder(root);


    return 0;
}
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
void preorder(node * root)
{
    if(root==NULL) return;
     cout<<root->value<<" ";
     preorder(root->left);
     preorder(root->right);

}
int main()
{
    node *root=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *d=new node(50);
    node *e=new node(60);
    node *f=new node(70);
    node *g=new node(80);
    node *h=new node(90);
    node *i=new node(100);
    //connection

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    d->right=g;

preorder(root);
    return 0;
}
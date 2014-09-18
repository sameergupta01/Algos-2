#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *left;
       node *right;
};

int printLeaf(node *root)
{
     if(root == NULL)
     return 0;
     if(root->left == NULL && root->right == NULL)
     return 1;
     
     return printLeaf(root->left)+printLeaf(root->right);
 }
 
 int maxHeight(node *root)
 {
     if(root == NULL)
     return 0;
     int l = maxHeight(root->left);
     int r = maxHeight(root->right);
     return 1+ max(l,r);
 }

int  main()
{
     node *root = new node();
     root->data = 10;
     root->left = new node();
     root->left->data = 20;
     root->left->left = new node();
     root->left->left->data = 30;
     root->left->right = new node();
     root->left->right->data = 40;
     root->right = new node();
     root->right->data = 50;
     root->right->left = new node();
     root->right->left->data = 60;
     root->right->right = new node();
     root->right->right->data = 70;
     root->right->right->right = new node();
     root->right->right->right->data = 80;
     root->right->right->right->right = new node();
     root->right->right->right->right->data = 90;
     
     cout<<printLeaf(root)<<endl;
     
     cout<<"max height "<<maxHeight(root);
     
     cout<<getch();
     return 0;
     
 }

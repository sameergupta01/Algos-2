#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *left;
       node *right;
       };

void rtoL(node *root,int a[],int c)
{
    
//     if(root == NULL)
  //   return;
          a[c++] = root->data;
     if(root->left == NULL && root->right == NULL){
             for(int i=0;i<c;i++)
             cout<<a[i]<<"  ";
             cout<<endl;
    ////
             }
     

    rtoL(root->left,a,c);
    rtoL(root->right,a,c);
 };

void roottoLeaf(node *root)
{
   int a[10]; //size of leaf  
   int c = 0;
   rtoL(root,a,c);
 };


bool compareTrees(node *h1,node *h2)
{
     if(h1 == NULL && h2 == NULL)
     return true;
     //else
      if(h1 == NULL && h2 != NULL)
     return false;
     else if(h2 == NULL && h1 != NULL)
     return false;
     
     if(h1->data == h2->data)
     return true;           
     
     return (compareTrees(h1->left,h2->left) && compareTrees(h1->right,h2->right));
     
 };


int main()
{
    //******************************************* tree1 **********************************
    node *root = new node();
    root->data = 40;
    
    root->left = new node();
    root->right = new node();
    root->left->data = 20;
    root->right->data = 60;
    
    root->left->left = new node();
    root->left->left->data = 10;
    root->left->right = new node();
    root->left->right->data = 30;
    
    
    root->right->left = new node();
    root->right->left->data = 50;
    root->right->right = new node();
    root->right->right->data = 70;
    //*************************************************************************************
    
    //******************************************* tree2 ************************************
    node *root1 = new node();
    root1->data = 40;
    
    root1->left = new node();
    root1->right = new node();
    root1->left->data = 20;
    root1->right->data = 60;
    
    root1->left->left = new node();
    root1->left->left->data = 10;
    root1->left->right = new node();
    root1->left->right->data = 10;
    
    
    root1->right->left = new node();
    root1->right->left->data = 50;
    root1->right->right = new node();
    root1->right->right->data = 70;
    //****************************************************************************************
    
    cout<<compareTrees(root,root1);
       
    //roottoLeaf(root);
    
    cout<<getch();
    return 0;
}

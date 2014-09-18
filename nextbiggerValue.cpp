#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *left;
       node *right;
       };
  
              
int getAncestor(node *root,int n)
{
    if(root == NULL)
    return -1;
    node *t = root;
    node *value = NULL;
    while(t != NULL)
    {
               if(t->data > n)
               {
                           value = t;
                           t = t->left;
                           }
                           else
                           t = t->right;
               }
               return value->data;
    
};

//similar to getting all nodes upto that number using DFS
void getAllAncestors(node *root,int n,int a[],int count)
{
                     if(root == NULL)
                     return;
                     
                     a[count] = root->data;
                     
                     if(root->data == n)
                     {
                                   for(int i=0;i<=count;i++)
                                   cout<<a[i]<<"  ";
                                   return;
                                   }
                     getAllAncestors(root->left,n,a,count+1);
                     getAllAncestors(root->right,n,a,count+1);
                     }


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
    cout<<getAncestor(root,40);
      //int a[20];
      //int count = 0;
      //getAllAncestors(root,30,a,count);
    cout<<getch();
    return 0;
}

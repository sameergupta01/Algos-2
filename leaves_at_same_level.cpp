#include <iostream>
#include <conio.h>

using namespace std;


struct node
{
       int data;
       node *left;
       node *right;
       };

//get max value leaf node at odd level.
int getOddLevelLeafNode(node *root,int count,int *val)
{
   
   if(root == NULL)
   return 0;
   
    if(root->left == NULL && root->right == NULL)
    {
                  if(count % 2 == 1)
                  {
                           if(*val < root->data)
                           *val = root->data;
                           return *val;
                           }                           
                           }
    return max(getOddLevelLeafNode(root->left,count+1,val),getOddLevelLeafNode(root->right,count+1,val));

};

int main()
{
    node *root = new node();
    root->data = 10;
    root->left = new node();
    root->left->data = 5;
    root->left->left = new node();
    root->left->left->data = 1;
    root->right = new node();
    root->right->data = 20;
    root->right->left = new node();
    root->right->left->data = 15;
    root->right->right = new node();
    root->right->right->data = 25;
    int  min = INT_MIN;
    int max = INT_MAX;
    int *val = 0;
    cout<<"odd level greatest value "<<getOddLevelLeafNode(root,0,val);
    cout<<getch();
    return 0;
}

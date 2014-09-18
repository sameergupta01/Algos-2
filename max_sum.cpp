#include <iostream>
#include <conio.h>
#include <stack>

using namespace std;

struct node
{
       int data;
       node *left;
       node *right;
       };



int getFinalSum(node *root,int l_max[],int g_max[])
{
     if(root == NULL)
     return 0;
     int l = getFinalSum(root->left,l_max,g_max);
     int r = getFinalSum(root->right,l_max,g_max);
     if(max(l,r)+root->data > 0){
                            cout<<"l: "<<l<<" r: "<<r;
                            cout<<" root->data: "<<root->data<<endl;
     l_max[0] = max(l,r)+root->data;
     cout<<"l_max"<<l_max<<endl;
     cout<<"g_max"<<g_max<<endl;
     if(g_max[0] < l_max[0]){
     g_max[0] = l_max[0];}}
     else
     l_max[0] = 0;
     return g_max[0];
 };

 
 
int main()
{
    
    /*
             -3
          -9   20
         1 2 15  17
    */

node *root = new node();
root->data = -3;
root->left = new node();
root->right = new node();
root->left->data = -9;
root->right->data = 20;
root->left->left = new node();
root->left->left->data = 1;
root->left->right = new node();
root->left->right->data = 2;
root->right->left = new node();
root->right->left->data = 15;
root->right->right = new node();
root->right->right->data = 17;
int l[1],r[1];
l[0] = 0;
r[0] = 0;
cout<<"Final sum is: "<<getFinalSum(root,l,r)<<endl;
//printZigZag(root);
//printLevelOrderInReverse(root);
cout<<getch();
return 0;    
}

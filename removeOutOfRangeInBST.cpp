#include <iostream>
#include <conio.h>
#include <queue>
#include <stack>

using namespace std;

struct node
{
       int data;
       node *left;
       node *right;
       };

void inorder(node *root)
{
     if(root == NULL)
     return;
     
     inorder(root->left);
     cout<<root->data<<"  ";
     inorder(root->right);
 };
 
node * removeNodeFromRange(node *root,int min,int max)
{
     if(root == NULL)
     return NULL;
     root->left = removeNodeFromRange(root->left,min,max);
     root->right = removeNodeFromRange(root->right,min,max);
     if(root->data > max)
     {
                   node *l = root->left;
                   delete(root);
                   return l;
                   }
                   else if(root->data < min)
                   {
                        node *r = root->right;
                        delete(root);
                        return r;
                    }
                    return root;
     
 };
 
void levelOrder(node *root)
{
     node *dummy = new node();
     dummy->data = -9999;
     dummy->left = NULL;
     dummy->right = NULL;
     queue<node *> q;
     stack<int> s;
     if(root == NULL)
     return;
     q.push(root);
     q.push(dummy);
     while(!q.empty())
     {   
                   node *tops = q.front();   
                   q.pop();
                   if(tops->data == -9999){
                    if(q.empty())            
                    break;
                   q.push(dummy);             
                   s.push(-9999);}
                   else{
                   s.push(tops->data);}
                   if(tops->right != NULL)
                   q.push(tops->right);
                   if(tops->left != NULL)
                   q.push(tops->left);

                      }
                      while(!s.empty())
                      {
                                       int top = s.top();
                                       if(top == -9999)
                                       cout<<endl;
                                       else
                                       cout<<top<<"  ";
                                       s.pop();
                                       }
                      
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
    levelOrder(root);
//    inorder(root);
//    node * l = removeNodeFromRange(root,20,50);
//    cout<<endl;
//    inorder(l);
    cout<<getch();
    return 0;
}//

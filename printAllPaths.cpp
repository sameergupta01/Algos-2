#include <iostream>
#include <conio.h>
#include <stack>

using namespace std;

struct node{
       int data;
       node *left;
       node *right;
       };

// Utility that prints out an array on a line. 
void printArray(int ints[], int len) { 
  int i; 
  for (i=0; i<len; i++) { 
    printf("%d ", ints[i]); 
  } 
  printf("\n"); 
}

bool PO(node *root,int value)
{
     if(root == NULL)
     return false;
     if(PO(root->left,value))
     cout<<root->left->data<<"  ";
     if(PO(root->right,value))
     cout<<root->left->data<<"  ";
     if(root->data == value)
     {
                   return true;
                   }
                   return false;
 };

void postOrder(node *root,int value)
{
     if(root == NULL)
     return;
     stack<node*> parent;
     stack<node*> child;
     child.push(root);
     while(!child.empty())
     {
                          node *top = child.top();
                          child.pop();
                          if(top->left == NULL && top->right == NULL && top->data == value)
                          break;
                          if(top->left)
                          child.push(top->left);
                          if(top->right)
                          child.push(top->right);
                          parent.push(top);
                          }
                          
                          while(!child.empty())
                          {
                                                cout<<child.top()->data<<"  ";
                                                child.pop();
                                                }
     
 };

void printAllPaths(node *root,int path[],int counter)
{
     if(root == NULL)
     return;
     
     path[counter++] = root->data;
     
     if(root->left == NULL && root->right == NULL)
     printArray(path,counter);
     else
     printAllPaths(root->left,path,counter);
     printAllPaths(root->right,path,counter);
 };
 
 void PrintRows(int a[],int n)
 {
      
  };

int main()
{
node *root = new node();
root->data = 3;
root->left = new node();
root->right = new node();
root->left->data = 9;
root->right->data = 20;
root->left->left = new node();
root->left->left->data = 1;
root->left->right = new node();
root->left->right->data = 2;
root->right->left = new node();
root->right->left->data = 15;
root->right->right = new node();
root->right->right->data = 70;
int path[100];
//PO(root,2);
postOrder(root,2);
    //printAllPaths(root,path,0);
    cout<<getch();
    return 0;
}

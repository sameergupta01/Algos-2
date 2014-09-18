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


void printZigZag(node *root)
{
     bool ltor = true;
     stack<node*> current,next,final;
     current.push(root);
     while(!current.empty())
     {
                            node *top = current.top();
                            final.push(current.top());
     //                       cout<<top->data<< "  ";
                            current.pop();
                            if(ltor)
                            {
                                    if(top->left)
                                    next.push(top->left);
                                    if(top->right)
                                    next.push(top->right);
                                                                       }
                                    else
                                    {
                                        if(top->right)
                                        next.push(top->right);
                                        if(top->left)
                                        next.push(top->left);
                                     }
                                    
                            

                            if(current.empty())
                            {
                                               ltor = !ltor;
                                               stack<node*> temp;
                                               while(!next.empty())
                                               {
                                                                   temp.push(next.top());
                                                                   next.pop();
                                                                   }
                                                                   
                                               while(!temp.empty())
                                               {
                                                                   current.push(temp.top());
                                                                   temp.pop();
                                                                   }

                                                                   
                                               
                                               }
                                              cout<<endl;
                                               while(!final.empty()){
                                               cout<<final.top()->data<<"  ";
                                               final.pop();}


                                               }
     
 };
 
 
 
 
int main()
{

node *root = new node();
root->data = 3;
root->left = new node();
root->right = new node();
root->left->data = 9;
root->right->data = 20;
//root->left->left = new node();
//root->left->left->data = 1;
//root->left->right = new node();
//root->left->right->data = 2;
root->right->left = new node();
root->right->left->data = 15;
root->right->right = new node();
root->right->right->data = 7;
printZigZag(root);
//printLevelOrderInReverse(root);
cout<<getch();
return 0;    
}

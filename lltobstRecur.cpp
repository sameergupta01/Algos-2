#include <iostream>
#include <conio.h>

using namespace std;

struct BST
{
       int data;
       BST *left;
       BST *right;
       };

struct LL
{
       int data;
       LL *ptr;
       };

void printLL(LL* head)
{
     while(head != NULL)
     {
                cout<<head->data<<"  ";
                head = head->ptr;
                }
                
 }
 
 BST* lltoBST(LL *head,int max,int min)
 {
      if(min > max)
      return NULL;
      BST* root = new BST();
      LL* mid = head;
      int i = 1;
      if(min ==1 && max == 1)
      return NULL;
      while(i < (max+min)/2){
      mid = mid->ptr;
      i++;}
      
      cout<<"min "<<min<<" max "<<max<<endl;
      cout<<"root->left "<<(max+min)/2-1<<"  "<<min<<"  "<<mid->data<<endl;
      cout<<"root->right "<<max<<"  "<<(max+min)/2+1<<"  "<<mid->data<<endl;
      
      root->data = mid->data;
      root->left = lltoBST(head,(max+min)/2-1,min);
      root->right = lltoBST(head,max,(max+min)/2+1);
      return root;
  };
  
  BST * lltobst_(LL** head,int start,int end)
  {
      if(start > end)
      return NULL;
      int mid = start + (end-start)/2;
      BST *left = lltobst_(head,start,mid -1);
      BST *root = new BST();
      root->data = (*head)->data;
      root->left = left;
      *head = (*head)->ptr;
      root->right = lltobst_(head,mid+1,end);
      return root;
      
      
  };
  
  BST* sortedListToBST(LL *& list, int start, int end) {
  if (start > end) return NULL;
  // same as (start+end)/2, avoids overflow
  int mid = start + (end - start) / 2;
  BST *leftChild = sortedListToBST(list, start, mid-1);
  BST *parent = new BST();
  parent->data = list->data;
  parent->left = leftChild;
  list = list->ptr;
  parent->right = sortedListToBST(list, mid+1, end);
  return parent;
}
 
 void printTreeInorder(BST *root)
 {
      if(root == NULL)
      return;
      printTreeInorder(root->left);
      cout<<root->data<<"   ";
      printTreeInorder(root->right);
  }
 
 void lltoBST(LL *head)
 {
      int max = 4;
      int min = 0;
      BST *root = lltobst_(&head,min,max);
      printTreeInorder(root);
  };

int main()
{
    LL *l = new LL();
    l->data = 10;
    l->ptr = new LL();
    l->ptr->data = 20;
    l->ptr->ptr = new LL();
    l->ptr->ptr->data = 30;
    l->ptr->ptr->ptr = new LL();
    l->ptr->ptr->ptr->data = 40;
    l->ptr->ptr->ptr->ptr = new LL();
    l->ptr->ptr->ptr->ptr->data = 50;
    //printLL(l);
    lltoBST(l);
    cout<<getch();
    return 0;
}

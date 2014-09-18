#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *ptr;
       };
    
void merge(node *head1, node **head2)
{
     if(*head2 == NULL)
     return;
     node *c1 = head1;
     node *c2 = *head2;
     node *c3 = c1->ptr;
     node *c4 = c2->ptr;
     while(c3 != NULL && c4 != NULL)
     {              
             c1->ptr = c2;
             c2->ptr = c3;
             
             c1 = c3; 
             c3 = c1->ptr; 
             
             c2 = c4;
             c4 = c2->ptr;
          
                          
              }
              
              if(c2 != NULL)
              *head2 = c2;
 };    
 
 void print(node *head)
 {
      node *current = head;
      while(current != NULL)
      {
                    cout<<current->data<<" -> ";
                    current = current->ptr;
                 }
                 cout<<endl;
  }
       
int main()
{
    
node *head = new node();
head->data = 1;
head->ptr = new node();
head->ptr->data = 3;
head->ptr->ptr = NULL;//new node();
//head->ptr->ptr->data = 5;
//head->ptr->ptr->ptr = NULL;    

node *head1 = new node();
head1->data = 2;
head1->ptr = new node();
head1->ptr->data = 4;
head1->ptr->ptr = new node();
head1->ptr->ptr->data = 6;
head1->ptr->ptr->ptr = NULL;
merge(head,&head1);
print(head);
print(head1);
cout<<getch();
return 0;
};

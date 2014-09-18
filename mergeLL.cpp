#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *prev;
       node *next;
       };
       
node *mergeLL(node *h1,node *h2)
{
     node *current = NULL;
     node *h3 = NULL;
     if(h1 == NULL && h2 == NULL)
     return NULL;
     if(h1->data < h2->data){
     h3 = h1;
     h1 = h1->next;}
     else
     {
         h3 = h2;
         h2 = h2->next;}
     current = h3;    
     while(h1 != NULL && h2 != NULL)
     {
              if(h1->data < h2->data)
              {
                          current->next = h1;
                          h1->prev = current;
                          h1 = h1->next;                          
                          }
                          else
                          {                              
                          current->next = h2;
                          h2->prev = current;
                          h2 = h2->next;                          
                          }
              current = current->next;
              }
              if(h1 != NULL){
              current->next = h1;
              h1->prev = current;}
              else if(h2!= NULL){
              current->next = h2;
              h2->prev = current;}
              return h3;
 };       
       
void printLL(node *h)
{
     node *t = h;
     if(h == NULL)
     return;
     while(t != NULL)
     {
             cout<<t->data<<endl;
             t = t->next;
             }
             cout<<endl;
 };       

int main()
{
    node *h = new node();
    h->prev = NULL;
    h->data = 10;
    h->next = new node();
    h->next->prev = h;
    h->next->data = 30;
    h->next->next = new node();
    h->next->next->prev = h->next;
    h->next->next->next = NULL;
    h->next->next->data = 50;
    
    
    
    node *h1 = new node();
    h1->prev = NULL;
    h1->data = 20;
    h1->next = new node();
    h1->next->prev = h1;
    h1->next->data = 40;
    h1->next->next = new node();
    h1->next->next->prev = h1->next;
    h1->next->next->next = NULL;
    h1->next->next->data = 60;
    
    printLL(h);
    printLL(h1);
    
    node *h3 = mergeLL(h,h1);
    printLL(h3);
    
    cout<<getch();
    return 0;
}

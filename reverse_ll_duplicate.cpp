#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *ptr;
       };

node *reverseLL(node *head)
{
     node *prev = NULL;
     node *current = head;
     node *next = NULL;
     
     while(current->ptr != NULL)
     {
                        next = current->ptr;
                        current->ptr = prev;
                        
                        prev = current;
                        current = next;
                        }
                        current->ptr = prev;
     head = current;
     return head;
 };
 
 void print(node *head)
 {
      node *t = head;
      while(t != NULL)
      {
              cout<<t->data<<"  ";
              t = t->ptr;
              }
              cout<<endl;
  };

int main()
{
    node *head = new node();
    head->data = 10;
    head->ptr = new node();
    head->ptr->data = 20;
    head->ptr->ptr = new node();
    head->ptr->ptr->data = 30;
    head->ptr->ptr->ptr = new node();
    head->ptr->ptr->ptr->data = 40;
    head->ptr->ptr->ptr->ptr = new node();
    head->ptr->ptr->ptr->ptr->data = 50;
    print(head);
    node * h = reverseLL(head);
    print(h);
    cout<<getch();
    return 0;
}

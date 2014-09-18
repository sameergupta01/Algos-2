#include <iostream>
#include <conio.h>

using namespace std;


struct node
{
       int data;
       node *next;
       };


void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
  
    /* put in the data  */
    new_node->data  = new_data;
  
    /* link the old list off the new node */
    new_node->next = (*head_ref);
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

void printList(struct node *node)
{
    int count = 0;
    while(node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
        count++;
    }
}

node *reverseLL(node *hdr)
{
     node *current,*next,*start;
     start = NULL;
     current = hdr;
     while(current != NULL)
     {
                   next = current->next;
                   current->next = start;
                   start = current;
                   current = next;
                   
                   }
                   hdr = start;
                   return hdr;
     
     
 }

int main(void)
{
    /* Start with the empty list */
    struct node* head = NULL;
    int i;
  
    // create a list 1->2->3->4->5...... ->20
    for(i = 20; i > 0; i--)
      push(&head, i);
  
    printf("\n Given linked list \n");
    printList(head);
    head = reverseLL(head);
  
    printf("\n Modified Linked list \n");
    printList(head);
  
    getchar();
    return(0);
}

#include <iostream>
#include <conio.h>

using namespace std;


// A linked List Node
struct node
{
    int data;
    struct node* next;
};
 
typedef struct node node;
 
/* A utility function to insert a node at the beginning of linked list */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* A utility function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
    printf("\n");
}
 
// A utility function to swap two pointers
void swapPointer( node** a, node** b )
{
    node* t = *a;
    *a = *b;
    *b = t;
}
 
/* A utility function to get size of linked list */
int getSize(struct node *node)
{
    int size = 0;
    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void addList(node *h1,node *h2,node **result)
{
     if(h1 == null)
     return &h2;
     
     if(h2 == null)
     return &h1;
     
     int s1 = getSize(h1);
     int s2 = getSize(h2);
     
     if(abs(s1-s2) == 0)
     addLLSameSize(h1,h2,&result);
     else
     {
         move larger one to the diff
         
     }
     
     
 }


// Driver program to test above functions
int main()
{
    node *head1 = NULL, *head2 = NULL, *result = NULL;
 
    int arr1[] = {9, 9, 9};
    int arr2[] = {1, 8};
 
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
 
    // Create first list as 9->9->9
    int i;
    for (i = size1-1; i >= 0; --i)
        push(&head1, arr1[i]);
 
    // Create second list as 1->8
    for (i = size2-1; i >= 0; --i)
        push(&head2, arr2[i]);
 
    addList(head1, head2, &result);
 
    printList(result);
 
    return 0;
}

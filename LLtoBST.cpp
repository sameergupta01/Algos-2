#include <iostream>
#include <conio.h>

using namespace std;


 
 
/* UTILITY FUNCTIONS */
 /* Link list node */
struct LNode
{
    int data;
    struct LNode* next;
};
 
/* A Binary Tree node */
struct TNode
{
    int data;
    struct TNode* left;
    struct TNode* right;
};
 
/* Function to insert a node at the beginging of the linked list */
void push(struct LNode** head_ref, int new_data)
{
    /* allocate node */
    struct LNode* new_node =
        (struct LNode*) malloc(sizeof(struct LNode));
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* Function to print nodes in a given linked list */
void printList(struct LNode *node)
{
    while(node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct TNode* newNode(int data)
{
    struct TNode* node = (struct TNode*)
                         malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}
 
/* A utility function to print preorder traversal of BST */
void preOrder(struct TNode* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}


LNode* getMiddle(LNode *head,LNode *end,bool flag)
{
       if(head == NULL || head == end )
       return NULL;
       
       if(flag)
       cout<<"LEFT"<<endl;
       else
       cout<<"RIGHT"<<endl;
       
       LNode *slow = head;
       LNode *fast = head;
       while( fast !=NULL && (fast->next != end && fast->next->next !=end))
       {
              cout<<"slow "<<slow->data<<endl;
              cout<<"fast "<<fast->data<<endl;
              slow = slow->next;
              fast = fast->next->next;
              }
                    cout<<"slow:: "<<slow->data<<endl;
              return slow;
       }


TNode *sortedListToBST(LNode *head,LNode *end,bool flag)
{
      if(head == NULL || head == end)
      return NULL;
      
      TNode *root = new TNode();
      LNode *l = getMiddle(head,end,flag);
      cout<<l->data<<endl;
      root->data = l->data;
      root->left = sortedListToBST(head,l,true);
      root->right = sortedListToBST(l->next,end,false);
      return root;
 }

int main()
{
    /* Start with the empty list */
    struct LNode* head = NULL;
 
    /* Let us create a sorted linked list to test the functions
     Created linked list will be 7->6->5->4->3->2->1 */
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
 
    printf("\n Given Linked List ");
    printList(head);
 
    /* Convert List to BST */
    struct TNode *root = sortedListToBST(head,NULL,true);
    printf("\n PreOrder Traversal of constructed BST ");
    preOrder(root);
    
    cout<<getch();
    return 0;
}

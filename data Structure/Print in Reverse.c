/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    struct Node *temp;
    temp = head;
    
    if(temp!=NULL && temp->next !=NULL)
    { 
    temp = temp->next;
    ReversePrint(temp);
    } 
     if(head != NULL)
     printf("%d\n",head->data) ;
    
    
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

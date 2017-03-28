/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
      
    Node *temp1,*temp2;
    temp1 = head;
    if(temp1 == NULL || temp1->next == NULL)
        return head;
    else{
        while(temp1->next != NULL)
            {
            if(temp1->data == temp1->next->data)
            {
                temp2=temp1->next;
                temp1->next=temp2->next;
                free(temp2);
            }
            else
                {
                temp1 = temp1->next;
            }
        }
        
        
    }
    return head;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    
    struct Node *temp1,*temp2;
    temp1 = head;
    temp2 = head;
    
    if(position == 0)
        {
        temp1=temp1->next;
        head->next=NULL;
        head =temp1;
               
    }
    else
        {
        
        for(int i = 0;i < position-1; i++)
            {
            temp1 = temp1->next;
            
        }
        temp2=temp1;
        temp1=temp1->next;
        temp2->next = temp1->next;
        temp1->next = NULL;
        free(temp1);
            
    }
    
    return head;
  // Complete this method
}

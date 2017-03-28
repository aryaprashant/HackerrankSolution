/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    
    struct Node *NewNode,*temp1,*temp2;
    NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = data;
    temp1 = head;
    temp2 = head;
    
    if(position == 0)
        { 
       NewNode->next = temp1;
         head = NewNode;
        }
    else
    {
        //temp1=temp1->next;
    for(int i = 0;i < position-1 ;i++)
        {
        temp1 = temp1->next;
        }
        
        if(temp1->next ==NULL)
            {
            temp1->next = NewNode;
        }
        else
         {
           //temp1 = temp1->next;
        temp2 = temp1->next;
        temp1->next = NewNode;
       NewNode->next= temp2;
        }
    }
    
    return head;
  // Complete this method only
  // Do not write main function. 
}

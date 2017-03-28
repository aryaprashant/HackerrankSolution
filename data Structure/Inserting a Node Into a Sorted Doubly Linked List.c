/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    
    Node *New,*temp;
     temp = (Node*)malloc(sizeof(Node));
     New = (Node*)malloc(sizeof(Node));
    
    New->data = data;
    New->next = NULL;
    New->prev = NULL;
    
    temp = head;
    
    if(head == NULL)
    {
        return New;
    }
    else 
        if(New->data <= head->data)
        {
          New->next = head;
          head->prev = New;
          head = New;
        return head;
    }
    else 
    {
        while( temp->next != NULL)
            {
            if(temp->data < New->data && temp->next->data >= New->data )
                {
                
                New->next = temp->next ;
                
                temp->next = New;
                New->prev = temp;
                New->next->prev = New;
                
                return head;
                
            }
           else 
               temp= temp->next;
                
            }
              temp->next = New;  
              New->prev = temp;
              
              //New = temp->next ;
        
        return head;
        
        
    }
     
}

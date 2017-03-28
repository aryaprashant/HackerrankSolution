/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    if(head == NULL || positionFromTail<0)
        return 0;
    
    Node *temp1,*temp2;
    temp1 = head; 
    temp2 = head;
    int i=0;
    for(int i= 0;i<positionFromTail;i++)
    {
        if(temp2 ==NULL){
            return 0;
        }
        else
        temp2 = temp2->next; 
       
    }
    while(temp2->next!=NULL)
        {
        
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
        return temp1->data;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node *temp;
    struct Node *tailNode;
    tailNode=(struct Node *)malloc(sizeof(struct Node));
    temp = head;
    tailNode->data = data;
    
    if(temp==NULL)
        {
       head = tailNode;  
       }
    else
      {
        while(temp->next!=NULL)
        {
        temp = temp->next;
        }
     temp->next = tailNode;
    }   
    return head;
  // Complete this method
}

/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    struct Node *newNode,*temp;
     newNode=(struct Node *)malloc(sizeof(struct Node));
    temp = head;
    newNode->data = data;
    if(temp==NULL)
        {
        head=newNode;
    }
   else{
        
       newNode->next = head;
       head=newNode;
   }
    
    return head;
  // Complete this method
}

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

int getLinkedListLen(Node*head)
        {
        int len =0;
        
            while(head != NULL)
            {
                head = head->next;
                len++;
            }
           return len;
    }
;
int FindMergeNode(Node *headA, Node *headB)
{
    Node *tempA,*tempB;
    int lenA,lenB;
     
    tempA= headA;
    tempB= headB;
    
    lenA = getLinkedListLen(headA);
    lenB = getLinkedListLen(headB);
    
    if(lenA > lenB)
       { int i=1;
        while(i <= lenA-lenB)
            {
            tempA=tempA->next;
            i++;
           }
      }
    else 
        {
        int i=1;
        while(i <= lenB-lenA)
            {
            tempB=tempB->next;
            i++;
           }
    }
    
    while(tempA!=tempB)
        {
       
        tempA=tempA->next;
        tempB=tempB->next;
    }
    
    return tempA->data;
    // Complete this function
    // Do not write the main method. 
}

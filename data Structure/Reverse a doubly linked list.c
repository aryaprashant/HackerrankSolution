/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if(head == NULL || head->next == NULL)
			return head;
		Node *p = head;
		while(p->next != NULL)
		{
			Node *temp = p->next;
			p->next = p->prev;
			p->prev = temp;
			p = temp;
		}
		p->next = p->prev;
		p->prev = NULL;
		return p;
         
    // Complete this function
    // Do not write the main method. 
}

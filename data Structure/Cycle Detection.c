/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    
    Node *first,*second;
    first = head;
    second = head;
    if(second == NULL ||second->next == NULL )
        return false;
    else{
        
        while(second->next!=NULL && second->next->next!=NULL)
            {
            second = second->next;
            second = second->next;
            first = first->next;
            if(first==second)
                return true;
              
        }
        
        return false;
    }
        
    // Complete this function
    // Do not write the main method
}

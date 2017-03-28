/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    node *temp;
    temp = root;
        
  if(temp ==NULL)
    {  
      
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return(temp);
    }
    if(temp->data > value)
     temp->left = insert(temp->left,value);
  else
   {
     if(temp->data <= value)
	temp->right = insert(temp->right,value);
   }
   return root;
}

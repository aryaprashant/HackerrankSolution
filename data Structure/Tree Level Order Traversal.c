
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
void GivenLevelOrder(struct node* root, int level);
    int height(struct node* node);

void LevelOrder(node * root)
{
    
    
    
  int h = height(root);
    int i;
    for (i=1; i<=h; i++)
        GivenLevelOrder(root, i);
  
}
void GivenLevelOrder(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        GivenLevelOrder(root->left, level-1);
        GivenLevelOrder(root->right, level-1);
    }
}
    ;
    int height(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        
        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
};

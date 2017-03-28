int getHeight(Node* root){
    
    if (root==NULL) 
       return -1;
   else
   {
       
       int lheight,rheight;
        lheight = getHeight(root->left);
        rheight = getHeight(root->right);
 
       if (lheight > rheight) 
           return(lheight+1);
       else return(rheight+1);
   }
    
}
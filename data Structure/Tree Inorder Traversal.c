/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    if(root != NULL){
        inOrder(root->left);
        printf("%d",root->data);
        printf(" ");
        inOrder(root->right);
        
    }

}

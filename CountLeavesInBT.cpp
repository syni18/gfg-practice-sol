void helper(Node* root, int &count){
    if(root==NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        count++;
        return;
    }
    helper(root->left, count);
    helper(root->right, count);
    return;
}

int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
  helper(root, count);
  return count; 
}

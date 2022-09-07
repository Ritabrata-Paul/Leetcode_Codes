class Solution {
public:
    
    string build(TreeNode* root){
        if(root==NULL) return "";
        if(root->left == NULL && root->right == NULL){
            return to_string(root->val)+"";
        }
        if(root->right==NULL){
            return to_string (root->val)+"("+build(root->left)+")";
        }
        return to_string(root->val)+"("+build(root->left)+")"+"("+build(root->right)+")";
    }
    
    
    
    string tree2str(TreeNode* root) {
        return build(root);
    }
};
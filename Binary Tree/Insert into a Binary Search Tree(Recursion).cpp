// https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return root = new TreeNode(val);
        
        if(root->val>val){
            if(root->left) insertIntoBST(root->left, val);
            else root->left = new TreeNode(val);
        }
        else if(root->val <= val){
            if(root->right) insertIntoBST(root->right, val);
            else root->right = new TreeNode(val);
            
        }
        return root;
    }
};

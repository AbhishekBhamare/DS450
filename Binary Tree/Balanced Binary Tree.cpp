// https://leetcode.com/problems/balanced-binary-tree/

class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        
        int lh = height(root->left);
        if(lh == -1) return -1;
        int rh = height(root->right);
        if(rh == -1) return -1;
        if(abs(lh-rh)>1) return -1;
        return 1+max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};

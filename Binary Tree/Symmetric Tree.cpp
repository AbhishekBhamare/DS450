// https://leetcode.com/problems/symmetric-tree/submissions/

class Solution {
public:
    bool f;
    void check(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2) return;
        if(!r1 || !r2 || r1->val!=r2->val){
            f=false;
            return;
        }
        check(r1->left,r2->right);
        check(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        f=true;
        if(!root) return f;
        check(root->left, root->right);
        return f;
        
    }
};

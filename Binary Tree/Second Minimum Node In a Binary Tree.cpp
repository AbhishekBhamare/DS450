// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/

class Solution {
public:
    set<int>s;
    void secMin(TreeNode* root){
        if(root==NULL) return;
        secMin(root->left);
        s.insert(root->val);
        secMin(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL) return -1;
        secMin(root);
        if(s.size()<=1) return -1;
        s.erase(s.begin());
        return *s.begin();
    }
};

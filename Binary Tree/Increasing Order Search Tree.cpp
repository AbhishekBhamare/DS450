// https://leetcode.com/problems/increasing-order-search-tree/
// As we know inorder traversal of BST in Sorted;

class Solution {
public:
    vector<int>v;
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        if(root->left) inOrder(root->left);
        v.push_back(root->val);
        if(root->right) inOrder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inOrder(root);
        TreeNode* node = root;
        node = new TreeNode(v[0]);
        root = node;
        node->left = NULL;
        
        for(int i=1; i<v.size(); ++i){
            node->right = new TreeNode(v[i]);
            node->left = NULL;
            node = node->right;
        }
        return root;
    }
};

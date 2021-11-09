// https://leetcode.com/problems/merge-two-binary-trees/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* merge(TreeNode* node1, TreeNode* node2){
        
        if(node1&&node2){
            node1->val = node1->val+node2->val;
            node1->left = merge(node1->left, node2->left);
            node1->right = merge(node1->right, node2->right);
            return node1; 
        }
        else if(node1==NULL)
            return node2;
        else if(node2==NULL)
            return node1;
        
        return NULL;
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL)
            return root2;
        if(root2==NULL)
            return root1;
        
        return merge(root1, root2);
    }
};

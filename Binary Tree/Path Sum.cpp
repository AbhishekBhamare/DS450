// https://leetcode.com/problems/path-sum/

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
    bool findPath(TreeNode* root, int targetSum,int sum){
       if(root == NULL) return false;
        sum += root->val;
        
        if(root->left == NULL && root->right == NULL){
            return (sum == targetSum) ? true : false;
        }
        return (findPath(root->left, targetSum, sum) || findPath(root->right, targetSum, sum));   
    }
    bool hasPathSum(TreeNode* root, int target) {
        return findPath(root, target, 0);
    }
};

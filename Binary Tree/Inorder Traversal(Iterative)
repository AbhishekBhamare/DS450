//Leetcode -: https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        TreeNode* node = root;
        while(true){
           if(node!=NULL){
               s.push(node);
               node = node->left;
           }else{
               if(s.empty()) break;
               node = s.top();
               s.pop();
               ans.push_back(node->val);
               node = node->right;
           }           
        }
        return ans;
    }
};

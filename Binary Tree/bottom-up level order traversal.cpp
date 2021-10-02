// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            vector<int>temp;
            int n = q.size();
            while(n--){
                TreeNode* node = q.front();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
            }
            // reverse(temp.begin(), temp.end());
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

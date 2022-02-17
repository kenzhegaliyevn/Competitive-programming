/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* node, int root) {
        if (!node) return true;
        if (root != node->val) return false;
        return dfs(node->left, root) && dfs(node->right, root);
    }
    
    bool isUnivalTree(TreeNode* root) {
        return dfs(root, !root ? -1 : root->val);
    }
};

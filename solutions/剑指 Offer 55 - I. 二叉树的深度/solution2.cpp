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
    int maxDepth(TreeNode* root) {
        int depth = 0, max = 0;
        util(root, depth, max);
        return max;
    }
    
    void util(TreeNode* T, int depth, int& max) {
        if (!T) return;
        depth++;
        max = depth > max ? depth : max;
        util(T->left, depth, max);
        util(T->right, depth, max);
    }
};
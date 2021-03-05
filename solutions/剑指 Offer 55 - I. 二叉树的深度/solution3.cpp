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
        // bfs
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res = 0, count = 0;
        while (!q.empty()) {
            res++;
            count = q.size();
            while (count > 0) {
                count--;
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
        }
        return res;
    }
};
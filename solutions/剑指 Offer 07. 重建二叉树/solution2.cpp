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
private:
    unordered_map<int, int> inorder_index;
public:
    TreeNode* buildSubTree(vector<int>& preorder, vector<int>& inorder,
    int preorder_root_idx, int inorder_left, int inorder_right) {
        if (inorder_left > inorder_right) return NULL;
        TreeNode* root = new TreeNode(preorder[preorder_root_idx]);
        int mid_idx = inorder_index[preorder[preorder_root_idx]];
        int left_sub_tree_size = mid_idx - inorder_left;
        root->left = buildSubTree(preorder, inorder, preorder_root_idx+1, inorder_left, mid_idx-1);
        root->right = buildSubTree(preorder, inorder, preorder_root_idx+left_sub_tree_size+1, mid_idx+1, inorder_right);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len_vec = preorder.size();
        if (len_vec == 0) return NULL;
        for (int i = 0; i < len_vec; i++) {
            inorder_index[inorder[i]] = i;
        }
        return buildSubTree(preorder, inorder, 0, 0, len_vec-1);
    }
};

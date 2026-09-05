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
    int maxDepth(TreeNode* root) {

        // Base case: empty tree
        if (root == nullptr) {
            return 0;
        }

        // Find depth of left and right subtree
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        // Current node adds 1
        return 1 + max(leftDepth, rightDepth);
    }
};
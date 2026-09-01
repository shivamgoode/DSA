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
    TreeNode* searchBST(TreeNode* root, int val) {

        if (root == nullptr) {
            return nullptr;
        }

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {

            TreeNode* current = st.top();
            st.pop();

            // Found the node
            if (current->val == val) {
                return current;
            }

            // Push right child
            if (current->right != nullptr) {
                st.push(current->right);
            }

            // Push left child
            if (current->left != nullptr) {
                st.push(current->left);
            }
        }

        return nullptr;
    }
};
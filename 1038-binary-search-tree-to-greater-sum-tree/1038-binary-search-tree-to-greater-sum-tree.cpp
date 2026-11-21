class Solution {
public:
    int sum = 0;

    void solve(TreeNode* root) {
        if(root == NULL) {
            return;
        }

        solve(root->right);

        sum += root->val;
        root->val = sum;

        solve(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        solve(root);
        return root;
    }
};
// Logic : Reverse Inorder Traversal to access decrising numbers in a tree.
class Solution {
    int height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        if(root->left == NULL && root->right == NULL) {
            return 1;
        }

        if(root->left == NULL) {
            return height(root->right) + 1;
        }

        if(root->right == NULL) {
            return height(root->left) + 1;
        }

        return min(height(root->left),height(root->right)) + 1;
    }
public:
    int minDepth(TreeNode* root) {
        int ans = height(root);

        return ans;
    }
};
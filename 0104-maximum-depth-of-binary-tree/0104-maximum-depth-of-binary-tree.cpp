class Solution {
    int height (TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int leftht = height(root->left);
        int rightht = height(root->right);

        int currht = max(leftht,rightht) + 1;

        return currht;
    }
public:
    int maxDepth(TreeNode* root) {
        int ans = height(root);
        return ans;
    }
};
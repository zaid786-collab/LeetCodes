class Solution {
    int height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int leftht = height(root->left);
        int rightht = height(root->right);

        if(leftht == -1 || rightht == -1) {
            return -1;
        }

        if(abs(leftht - rightht) > 1) {
            return -1;
        }

        return max(leftht,rightht) + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
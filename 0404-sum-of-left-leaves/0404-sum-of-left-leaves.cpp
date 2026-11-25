class Solution {
public:
    int ans = 0;

    int sumleft(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        if(root->left != NULL &&
        root->left->left == NULL 
        && root->left->right == NULL) {
            ans += root->left->val;
        }

        sumleft(root->left);
        sumleft(root->right);

        return ans;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = sumleft(root);
        return sum;
    }
};
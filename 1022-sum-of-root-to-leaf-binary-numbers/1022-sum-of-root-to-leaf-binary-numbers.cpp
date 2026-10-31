class Solution {
    int solve(TreeNode* root, int sum) {
        if(root == NULL) {
            return 0;
        }

        sum = sum*2 + root->val;

        if(root->left ==  NULL && root->right == NULL) {
            return sum;
        }

        return solve(root->left, sum) + solve(root->right, sum);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return solve(root,0);
    }
};
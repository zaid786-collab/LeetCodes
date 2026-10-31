class Solution {
public:
    bool checkTree(TreeNode* root) {
        int leftd = root->left->val;

        int rightd = root->right->val;

        if(leftd + rightd == root->val) {
            return true;
        }

        return false;
    }
};
class Solution {
public:
    int solve(TreeNode* root, int minvl, int maxvl) {

        if(root ==  NULL) {
            return maxvl - minvl;
        }

        maxvl = max(maxvl, root->val);
        minvl = min(minvl, root->val);

        int left = solve(root->left,minvl,maxvl);
        int right = solve(root->right,minvl,maxvl);

        return max(left,right);
    }

    int maxAncestorDiff(TreeNode* root) {
        return solve(root,root->val,root->val);
    }
};
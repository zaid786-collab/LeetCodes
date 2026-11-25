class Solution {
public:
    int ans = 0;
    int maxdepth = -1;

    int lastleft(TreeNode* root, int depth) {
        if(root == NULL) {
            return 0;
        }

        depth++;
    
        if(maxdepth < depth) {
            maxdepth = depth;
            ans = root->val;
        }

        lastleft(root->left, depth);
        lastleft(root->right, depth);

        return ans;
    }

    int findBottomLeftValue(TreeNode* root) {
        return lastleft(root,0);
    }
};
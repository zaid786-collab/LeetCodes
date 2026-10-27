class Solution {
    int sum(TreeNode* root,int low,int high) {
        if(root == NULL) {
            return 0;
        }

        int leftsum = 0, rightsum = 0;

        if(root->left != NULL) {
            leftsum = sum(root->left,low,high);
        }
        if(root->right != NULL) {
            rightsum = sum(root->right,low,high);
        }

        int currsum = leftsum + rightsum;

        if(root->val >= low && root->val <= high) {
            currsum += root->val;
        }

        return currsum;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = sum(root,low,high);
        return ans;
    }
};
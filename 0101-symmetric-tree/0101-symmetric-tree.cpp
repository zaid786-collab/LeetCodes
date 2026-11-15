class Solution {
    bool issymmetry(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) {
            return true;
        } else if(root1 == NULL || root2 == NULL) {
            return false;
        }

        if(root1->val != root2->val) {
            return false;
        }

        return issymmetry(root1->left,root2->right) && issymmetry(root1->right, root2->left); 
    }
public:
    bool isSymmetric(TreeNode* root) {
        return issymmetry(root->left, root->right);
    }
};
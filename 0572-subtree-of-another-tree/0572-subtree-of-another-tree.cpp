class Solution {
    bool isidentical (TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) {
            return true;
        } else if(root == NULL || subRoot == NULL) {
            return false;
        }

        if(root->val != subRoot->val) {
            return false;
        }

        return isidentical(root->left, subRoot->left) && isidentical(root->right, subRoot->right);
    }

    bool isSubt(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) {
            return true;
        } else if(root == NULL || subRoot == NULL) {
            return false;
        }

        if(root->val == subRoot->val) {
            if(isidentical(root,subRoot)) {
                return true;
            }
        }

        return isSubt(root->left, subRoot) || isSubt(root->right, subRoot);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       return isSubt(root,subRoot);
    }
};
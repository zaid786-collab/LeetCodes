class Solution {
    bool isidentical (TreeNode* p,TreeNode* q) {
        if(p == NULL && q == NULL) {
            return true;
        } else if(p == NULL || q == NULL) {
            return false;
        }

        if(p->val != q->val) {
            return false;
        }

        return isidentical(p->left,q->left) && isidentical(p->right,q->right);

    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isidentical(p,q);
    }
};
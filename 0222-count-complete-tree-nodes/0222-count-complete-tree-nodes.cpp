class Solution {
    int leftheight(TreeNode* root) {
        int h = 0;

        while(root) {
            h++;
            root = root->left;
        }

        return h;
    }

    int rightheight(TreeNode* root) {
        int h = 0;

        while(root) {
            h++;
            root = root->right;
        }

        return h;
    }
    int count (TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int leftct = leftheight(root);
        int rightct = rightheight(root);

        if(leftct == rightct) {
            return (1<<leftct) - 1;
        }

        return 1 + count(root->left) + count(root->right);
    }
public:
    int countNodes(TreeNode* root) {
        return count(root);
    }
};
class Solution {
    int sumnode(TreeNode* root) {
        queue<TreeNode*> qt;
        qt.push(root);

        int sum;

        while(!qt.empty()) {
            sum = 0;
            int n = qt.size();

            for(int i=0;i<n;i++) {
                TreeNode* curr = qt.front();
                qt.pop();

                sum += curr->val;

                if(curr->left != NULL) {
                    qt.push(curr->left);
                }

                if(curr->right != NULL) {
                    qt.push(curr->right);
                }
            }
        }
        return sum;
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        return sumnode(root);    
    }
};
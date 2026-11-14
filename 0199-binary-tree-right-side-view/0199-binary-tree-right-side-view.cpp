class Solution {
    vector<int> rightview(TreeNode* root) {
        if(root == NULL) {
            return {};
        }
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);

        vector<int> ans;

        while(!Q.empty()) {
            TreeNode* curr = Q.front();
            Q.pop();

            if(curr == NULL) {
                if(Q.empty() ){
                    break;
                } Q.push(NULL);
            } 
            else {
                if(Q.front() == NULL) {
                    ans.push_back(curr->val);
                }

                if(curr->left != NULL) {
                    Q.push(curr->left);
                } if(curr->right != NULL) {
                    Q.push(curr->right);
                }
            }
        }

        return ans;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        return rightview(root);
    }
};
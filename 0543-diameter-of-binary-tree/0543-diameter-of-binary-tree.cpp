class Solution {
    pair<int,int> diameter(TreeNode* root) {
        if(root == NULL) {
            return make_pair(0,0);
        }

        // <Diameter,Height>
        pair<int,int> leftinfo = diameter(root->left);
        pair<int,int> rightinfo = diameter(root->right);

        int currdm = leftinfo.second + rightinfo.second + 1; // Passing through root so +1.
        int leftdm = leftinfo.first;
        int rightdm = rightinfo.first; 


        int finaldm = max(currdm, max(leftdm,rightdm));
        int finalht = max(leftinfo.second , rightinfo.second) + 1;

        return make_pair(finaldm,finalht);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).first - 1;
    }
};
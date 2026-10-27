class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;

        string temp = "";
        
        for(int i=0;i<m;i++) {
            temp = "";
            for(int j=0;j<n;j++) {
                if((j == n-1) || (i == 0)) {
                    temp += ".";
                }
                else {
                    temp += "#";
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
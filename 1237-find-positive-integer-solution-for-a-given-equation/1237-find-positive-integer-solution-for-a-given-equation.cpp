class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> ans;

        int low = 1;
        int high = 1000;

        while(low <= 1000 && high >= 1) {
            int value = customfunction.f(low,high);

            if(value == z) {
                ans.push_back({low,high});
                low++;
                high--;
            }
            else if (value < z) {
                low++;
            }else {
                high--;
            }
        }
        return ans;        
    }
};
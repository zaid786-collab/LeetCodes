class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int leni = 1,mxi = 1;
        int lend = 1,mxd = 1;

        for(int i=1;i<nums.size();i++) {
            if(nums[i] > nums[i-1]) {
                leni++;
                lend = 1;
            } else if(nums[i] < nums[i-1]){
                leni = 1;
                lend++;
            } else {
                leni = 1;
                lend = 1;
            }
            mxi = max(mxi,leni);
            mxd = max(mxd,lend);
        }

        return max(mxd,mxi);
    }
};
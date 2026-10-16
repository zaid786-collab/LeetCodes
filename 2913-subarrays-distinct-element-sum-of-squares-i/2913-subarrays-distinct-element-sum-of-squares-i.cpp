class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        int count = 0;

        for(int i=0;i<nums.size();i++) {
            set<int> st;   // To store distinct values.
            for(int j=i;j<nums.size();j++) {
                st.insert(nums[j]);

                count = st.size();     // num of distinct values in each sub array.

                ans += count*count;
            }
        }

        return ans;
    }
};

// subarray moves from i to j each j++ give new sub array but for sub array i <= j.
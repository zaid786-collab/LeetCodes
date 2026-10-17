class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> digit_sum(n);

        for (int i = 0; i < n; i++) {

            int num = nums[i];
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            digit_sum[i] = {sum,nums[i]};
        }

        sort(digit_sum.begin(),digit_sum.end());

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++) {
            mp[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n - 1; i++) {
            if(nums[i] == digit_sum[i].second) {
                continue;
            }
            int j = mp[digit_sum[i].second];

            mp[nums[i]] = j;
            mp[nums[j]] = i;

            swap(nums[i],nums[j]);
            swaps++;
        }

        return swaps;
    }
};
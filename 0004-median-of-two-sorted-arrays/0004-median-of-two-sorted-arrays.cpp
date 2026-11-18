class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(),nums1.end());

        int i = 0,j = 0;

        while(j < nums1.size() - 1){
            j = j + 2;
            i = i + 1;
        }

        if((nums1.size()) % 2 != 0){
            return nums1[i];
        }

        return double(nums1[i] + nums1[i-1]) / 2;
    }
};
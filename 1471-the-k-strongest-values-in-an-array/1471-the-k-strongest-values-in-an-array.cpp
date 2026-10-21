class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());

        int n = arr.size();
        int center =arr[(n-1)/2];

        sort(arr.begin(),arr.end() , [center](int a,int b) {
            if(abs(a - center) == abs(b - center)) {
                return a > b;
            }

            return abs(a - center) > abs(b - center);
        });

        vector<int> ans;

        for(int i=0;i<k;i++) {
            ans.push_back(arr[i]);
        }
        

        return ans;
    }
};
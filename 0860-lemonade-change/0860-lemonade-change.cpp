class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f5 = 0,f10 = 0;
        

        for (int i=0;i<bills.size();i++) {
            int value = bills[i];

                if(value == 5) {
                    f5++;
                }else if (value == 10) {
                    if(f5 > 0) {
                        f5--;
                        f10++;
                    }else {
                        return false;
                    }
                }
                else if(value == 20) {
                    if(f10 > 0 && f5 > 0) {
                        f10--;
                        f5--;
                    }else if (f5 >= 3) {
                        f5 -= 3;
                    }
                    else {
                        return false;
                    }
                }
        }

        return true;
    }
};
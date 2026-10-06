class Solution {
public:
    bool ispllindrom(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i <= j) {
            if(s[i] != s[j]) {
                return false;
            }
            else {
                i++;
                j--;
            }
        }

        return true;
    }

    int removePalindromeSub(string s) {
        if(s.length() == 0) {
            return 0;
        }

        else if(ispllindrom(s)) {
            return 1;
        }

        return 2;
    }
};
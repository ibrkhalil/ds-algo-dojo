class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 10 && x >= 0) {
            return true;
        }
        bool positive = x > 0;
        string s = to_string(x);
        if(!positive) {
            s = "-" + s;
        }
        int l = 0, r = s.size() - 1;
        while(l<r) {
            if(s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int max, c = 0;
    nums.push_back(0);
    for (int num: nums) {
        if (num == 1) {
            c++;
        } else {
            if (max < c) {
                max = c;
            }
            c = 0;
        }
    }
    return max;
    }
};
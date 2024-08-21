class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        int size = nums.size();
        for (int i = 0; i <= size; ++i) {
            if (i == size) {
                return size;
            }
            if (i == nums[i])
             continue;
             else
             return i;
        }
        return 0;
        
};
};
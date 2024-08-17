class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> db;
        for (int i = 0; i < nums.size(); ++i) {
            int remainder = target - nums[i];
            db.insert({remainder, i});
            auto it = db.find(nums[i]);
            if (it != db.end() && it->second != i) {
                ans.push_back(it->second);
                ans.push_back(i);
            }
        }
        return ans;
    }
};
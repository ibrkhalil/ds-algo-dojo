class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int> dq;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 0) {
                dq.push_front(nums[i]);
                continue;
            }
            dq.push_back(nums[i]);
        }
        vector<int> vectorFromQ;
        while (!dq.empty()) {
            vectorFromQ.push_back(dq.front());
            dq.pop_front();
        }
        return vectorFromQ;
    }
};
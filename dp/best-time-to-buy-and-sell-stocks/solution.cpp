// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <vector>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = 1e9;
        int diff = 0;
        int maxDiff = 0;
        int length = sizeof(prices);
        for (int price:prices) {
            if (price < mn)
                mn = price;
            diff = price - mn;
            if (diff > maxDiff)
                maxDiff = diff;
        }
        return maxDiff;
    }
};
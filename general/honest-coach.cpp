#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int strengthsCount;
    cin >> n;
    while (n--)
    {
        cin >> strengthsCount;
        vector<int> strengthsVec;
        for (int j = 0; j < strengthsCount; j++)
        {
            int x;
            cin >> x;
            strengthsVec.push_back(x);
        }
        sort(strengthsVec.begin(), strengthsVec.end());
        int minDiff = 1000;
        for (int j = 0; j < strengthsCount-1; j++)
        {
            int currDiff = abs(strengthsVec[j] - strengthsVec[j+1]);
            minDiff = min(currDiff, minDiff);
        }
        cout << minDiff << endl;
    }
}

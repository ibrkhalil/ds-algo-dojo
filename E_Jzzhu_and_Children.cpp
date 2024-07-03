#include <stack>
#include <map>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double m;
    cin >> n >> m;
    vector<double> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    double highestItemThatGotPushedBack = -1.0;
    int idx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        double currCeil = ceil(v[i]/m);
        if (v[i] > m && currCeil >= highestItemThatGotPushedBack) {
        highestItemThatGotPushedBack = max(highestItemThatGotPushedBack, currCeil);
        idx = i+1;
        }
    }
    cout << (idx == 0 ? n : idx);
}
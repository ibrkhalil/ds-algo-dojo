#include <stack>
#include <map>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int addition = 1;
const int deletion = 2;
const int printing = 3;
const int undoing = 4;

int main()
{
    stack<pair<int, string>> operationsPairs;
    int n;
    cin >> n;
    int arr[n];
    string res;
    for (int i = 0; i < n; i++)
    {
        int operation;
        cin >> operation;
        if (operation == 1)
        {
            string input;
            cin >> input;
            pair<int, string> currentJob;
            currentJob.first = 1;
            currentJob.second = input;
            operationsPairs.push(currentJob);
            res += input;
        }
        else if (operation == deletion)
        {
            int ToDelete;
            cin >> ToDelete;
            string deleted;
            deleted = res.substr(res.size() - ToDelete, ToDelete);
            pair<int, string> currentJob;
            currentJob.first = 2;
            currentJob.second = deleted;
            operationsPairs.push(currentJob);
            res.erase(res.size() - ToDelete, ToDelete);
        }
        else if (operation == printing)
        {
            int idx;
            cin >> idx;
            cout << res[idx-1] << endl;
        }
        else if (operation == undoing)
        {
            if(!operationsPairs.empty()) {
                if(operationsPairs.top().first == 1) {
                    res = res.substr(0, res.size() - operationsPairs.top().second.size());
                    operationsPairs.pop();
                } else {
                    res += operationsPairs.top().second;
                    operationsPairs.pop();
                }
            }
        }
    }
}



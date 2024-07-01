
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> zeros, negatives, positives;
    cin >> n;
    int arr[n];
    bool addedNeg = false;
    int negativesSeen = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0) {
            negativesSeen++;
        }
        else if ((arr[i] > 0)) {
            positives.push_back(arr[i]);
        } else {
            zeros.push_back(arr[i]);
    }
    }


    cout << negatives.size() << " ";
    for(int i = 0; i < negatives.size(); i++)
        cout << negatives[i] << ' ';
        cout << endl;


        cout << positives.size() << " ";
    for(int i = 0; i < positives.size(); i++)
        cout << positives[i] << ' ';
        cout << endl;

        cout << zeros.size() << " ";
    for(int i = 0; i < zeros.size(); i++)
        cout << zeros[i] << ' ';
        cout << endl;
}
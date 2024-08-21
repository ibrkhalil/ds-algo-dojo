#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int topFace = 0;
    cin >> topFace;
    int leftFace = 0, rightFace = 0;
    int opposingLeftFace = 0, opposingRightFace = 0, opposingTopFace = abs(7 - topFace);
    vector<vector<int>> ParentVect;
    for (int i = 0; i < n; ++i)
    {
        vector<int> vect;
        cin >> leftFace >> rightFace;
        opposingLeftFace = abs(7 - leftFace);
        opposingRightFace = abs(7 - rightFace);
        vect.push_back(leftFace);
        vect.push_back(rightFace);
        vect.push_back(opposingLeftFace);
        vect.push_back(opposingRightFace);
        vect.push_back(topFace);
        vect.push_back(opposingTopFace);
        sort(vect.begin(), vect.end());
        vect.erase(unique(vect.begin(), vect.end()), vect.end());
        ParentVect.push_back(vect);
    }
    bool correct = true;
    for (int i = 0; i < ParentVect.size(); i++)
    {
        if (ParentVect[i].size() != 6)
            correct = false;
    }
    if(correct){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int strlength = s.length();
    int ans[strlength] = {};
    int q;
    cin >> q;
    int similaritiesAchievedSoFar = 0;
    if (s[0] == s[1])
    {
        ans[0] = 1;
        similaritiesAchievedSoFar++;
    }
    for (int i = 1; i < strlength; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans[i] = ++similaritiesAchievedSoFar;
        } else {
            ans[i] = similaritiesAchievedSoFar;
        }
    }
 
    while (q--)
    {
        int l, r, c = 0;
        cin >> l >> r;
        int resp = ans[r-1]-ans[l-1];
        if(resp > 0)
        cout << resp << endl;
        else
        cout << 0 << endl;
    }
}
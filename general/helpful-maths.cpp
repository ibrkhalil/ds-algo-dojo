#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int strLen = s.length();
    vector<string> vect;
    for (int i = 0; i < strLen; i++)
    {   
        if(s[i] == '1' || s[i] == '2' || s[i] == '3') {
        vect.push_back(string(1, s[i]));
        }
    }
    sort( vect.begin(), vect.end() );
    int size = vect.size();
    string resString;
    for (int i = 0; i < size; ++i) {
        string plus = i == size - 1 ? "" : "+";
        resString += vect[i] + plus;
    }
    cout << resString;
}

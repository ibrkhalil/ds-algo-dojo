#include <bits/stdc++.h> 

using namespace std;

int main()
{
    string str;
    cin >> str;
    str.erase(str.find_last_not_of('0') + 1, string::npos );
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    string result = reversed == str ? "Yes" : "No";
    cout << result;
}

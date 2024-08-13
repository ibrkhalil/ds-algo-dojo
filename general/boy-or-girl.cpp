#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    set<int> S;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        S.insert(str[i]);
    }
    if(S.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

}
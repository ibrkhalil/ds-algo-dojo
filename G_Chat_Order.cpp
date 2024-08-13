#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <bits/stdc++.h>


using namespace std;
bool cmp(pair<int, string>& a, 
        pair<int, string>& b) 
{ 
    return a.first > b.first; 
}

void sortMap(map<int, string>& M) 
{ 
 
    // Declare vector of pairs 
    vector<pair<int, string> > A; 
 
    // Copy key-value pair from Map 
    // to vector of pairs
    set<string> duplication;
    for (auto& it : M) { 
        A.push_back(it);
        duplication.insert(it.second);
    } 
 
    // Sort using comparator function 
    sort(A.begin(), A.end(), cmp);
 
    // Print the sorted value 
    for (auto& it : A) { 
        if(duplication.count(it.second) > 0) {
            cout << it.second << endl;
            duplication.erase(it.second);
        }
    }
} 

int main()
{
    map<int, string> chat;
    int t;
    cin >> t;
    string s;
    int timeStamp = 0;
    while (t--)
    {
        cin >> s;
        chat[timeStamp++] = s;
    }
    sortMap(chat);
    
    
}

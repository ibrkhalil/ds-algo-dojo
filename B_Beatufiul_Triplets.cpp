#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, d;
    map<int, set<int>> DB;
    cin >> n >> d;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (DB.find(arr[i]) != DB.end())
        {
            DB[arr[i]].insert(i);
        }
        else
        {
            DB.insert({arr[i], {i}});
        }

        map<int, set<int>>::iterator findPrevBeautifulItem = DB.find(arr[i] - d);
        map<int, set<int>>::iterator findPrevPrevBeautifulItem = DB.find(arr[i] - (2 * d));

        if (findPrevBeautifulItem != DB.end() && findPrevPrevBeautifulItem != DB.end())
        {
            for (auto &prevBeautiful : findPrevBeautifulItem->second)
            {
                for (auto &prevPrevBeautiful : findPrevPrevBeautifulItem->second)
                {
                    if (prevBeautiful < i &&
                        (prevPrevBeautiful < i &&
                         prevPrevBeautiful < prevBeautiful))
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
}
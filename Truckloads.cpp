#include <iostream>
using namespace std;
int ans = 0;

void numTrucks(int numCrates, int loadSize)
{
    if (loadSize >= numCrates)
    {
        ans++;
        return;
    }
    numTrucks(numCrates / 2, loadSize);
    if (numCrates % 2 == 0)
    {
        numTrucks(numCrates / 2, loadSize);
    }
    else
    {
        numTrucks((numCrates / 2) + 1, loadSize);
    }
}

int main()
{
    int numCrates, loadSize;
    while (cin >> numCrates >> loadSize)
    {
        ans = 0;
        numTrucks(numCrates, loadSize);
        cout << ans << endl;
    }
}

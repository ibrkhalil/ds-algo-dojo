#include <iostream>

using namespace std;

int main() {
    int n, exiting, entering;
    cin >> n;
    int enteringArr[n];
    int exitingArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> exitingArr[i] >> enteringArr[i];
    }
    int alreadyInTram = -exitingArr[0] + enteringArr[0];
    int max_tram = alreadyInTram;
    for (int i = 1; i < n; i++)
    {
        int currentlyInTram = (enteringArr[i] - exitingArr[i]) + alreadyInTram;
        alreadyInTram = currentlyInTram;
        max_tram = max(max_tram, currentlyInTram);
    }
    cout << max_tram;
}
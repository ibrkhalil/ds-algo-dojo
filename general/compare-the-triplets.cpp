// Electronics shop

#include <iostream>
using namespace std;

int main() {
    int b, n, m;
    cin >> b >> n >> m;
    int keyboards[n];
    int USBModels[m];
    for (int i = 0; i < n; ++i) {
        cin >> keyboards[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> USBModels[i];
    }
    int maxVal = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int currentMatch = keyboards[i] + USBModels[j];
            if ((currentMatch > maxVal) && max(currentMatch, maxVal) <= b) {
                maxVal = keyboards[i] + USBModels[j];
            }
        }
    }
    cout << maxVal;

    
}

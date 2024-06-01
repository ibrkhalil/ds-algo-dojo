// Plus minus

#include <iostream>;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int posCnt, negCnt, zeroCnt = 0;
    int x = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x > 0) {
            ++posCnt;
        } else if (x == 0) {
            ++zeroCnt;
        } else
        ++negCnt;
    }

    cout << posCnt << "\n" << negCnt << "\n" << zeroCnt;
    
}

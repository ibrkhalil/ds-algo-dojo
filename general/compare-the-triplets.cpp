// Comapre the triplets

#include <iostream>;
using namespace std;

int main() {
    int x,y,z; // Alice
    int i,j,k; // Bob
    cin >> x >> y >> z >> i >> j >> k;
    int aliceScore = 0, bobScore = 0;
    if (x > i) {
        ++aliceScore;
    } else if (i > x) {
        ++bobScore;
    }
    if (y > j) {
        ++aliceScore;
    } else if (j > y) {
        ++bobScore;
    }
    if (z > k) {
        ++aliceScore;
    } else if (k > z) {
        ++bobScore;
    }
    int resArr[2];
    resArr[0] = aliceScore;
    resArr[1] = bobScore;
    cout << resArr[0] << " " << resArr[1];
}

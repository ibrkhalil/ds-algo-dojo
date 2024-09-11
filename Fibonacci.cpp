#include <iostream>

using namespace std;

int fib(int i) {
    if(i == 0) {
        return 0;
    }
    if(i == 1) {
        return 1;
    }

    return fib(i-1) + fib(i-2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    
}
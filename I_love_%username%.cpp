
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int leftMostSmallest = arr[0];
    int leftMostBiggest = arr[0];
    int amazingBiggerCnt = 0, amazingSmallerCnt = 0;
    for (size_t i = 1; i < n; i++)
    {
        if(arr[i] > leftMostBiggest) {
            leftMostBiggest = arr[i];
            amazingBiggerCnt++;
        }
        if(arr[i] < leftMostSmallest) {
            leftMostSmallest = arr[i];
            amazingSmallerCnt++;
        }
    }
    cout << amazingBiggerCnt + amazingSmallerCnt;
    
}

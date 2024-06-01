#include <iostream>

using namespace std;

int main()
{
    int arrCount = 0;
    cin >> arrCount;
    int arr[arrCount];
    int sum = 0;

    for (int i = 0; i < arrCount; i++)
    {   
        int num = 0;
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < arrCount; i++)
    {
        sum += arr[i];
    }
    cout <<  sum;
    
}

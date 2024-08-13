
#include <stack>
#include <map>
#include <iostream>
#include <vector>

using namespace std;

void printResult(vector<int> zeros, vector<int> positives, vector<int> negatives)
{
    cout << negatives.size() << " ";
    for (int i = 0; i < negatives.size(); i++)
    {
        cout << negatives[i] << " ";
    }
    cout << endl;
    cout << positives.size() << " ";
    for (int i = 0; i < positives.size(); i++)
    {
        cout << positives[i] << " ";
    }
    cout << endl;
    cout << zeros.size() << " ";
    for (int i = 0; i < zeros.size(); i++)
    {
        cout << zeros[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> positives;
    vector<int> negatives;
    vector<int> zeros;
    int negativesCount = 0;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zeros.push_back(x);
        }
        else if (x < 0)
        {
            negatives.push_back(x);
        }
        else if (x > 0)
        {
            positives.push_back(x);
        }
    }
    if (negatives.size() % 2 != 0)
    {
        while (negatives.size() > 1)
        {
            positives.push_back(negatives.back());
            negatives.pop_back();
        }
    }
    else
    {
        zeros.push_back(negatives.back());
        negatives.pop_back();
    }

    // Positives might be empty so adding a pair of negative elements to it will it non-empty to match the problem's constraints.

    if(positives.empty()) {
        positives.push_back(negatives.back());
        negatives.pop_back();
        positives.push_back(negatives.back());
        negatives.pop_back();
    }

    printResult(zeros, positives, negatives);
}

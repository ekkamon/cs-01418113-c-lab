#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum);

int main() {
    int n = 5;
    long min, max;
    vector<int> ar;

    for (int i = 0; i < n; ++i) {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    miniMaxSum(ar, &min, max);
    cout << min << " " << max << endl;
    return 0;
}

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum)
{
    *minSum = maxSum = pow(2, 32); maxSum *= -1;

    long i, sum;
    for(i = sum = 0; i < arr.size(); i++) sum += arr[i];

    for(long num : arr)
    {
        long total = sum - num;

        if (total > maxSum)
            maxSum = total;

        if (total < *minSum)
            *minSum = total;
    }
}
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>

using namespace std;

void signedRatio(vector<int> arr);

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    signedRatio(ar);
    return 0;
}

void signedRatio(vector<int> arr)
{
    vector<int> res(3);
    for(int num : arr)
        if (num == 0)
            res[2]++;
        else if (num > 0)
            res[0]++;
        else
            res[1]++;

    for(double amount : res)
        printf("%.6f\n", amount / static_cast<int>(arr.size()));
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles);
int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}

int birthdayCakeCandles(vector<int> candles)
{
    int max = -pow(2, 32), count = 0;

    for(int height: candles)
        if (height > max)
            max = height;

    for(int height: candles)
        if (height == max)
            count++;

    return count;
}
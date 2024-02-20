#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr);
int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}

int diagonalDifference(vector<vector<int>> arr)
{
    int left = 0, right = 0;
    size_t i, j, size = arr.size();

    for(i = 0, j = size-1; i < size; i++, j--)
    {
        left += arr[i][i];
        right += arr[i][j];
    }
    int total = left - right;

    return total < 0 ? total * -1 : total;
}
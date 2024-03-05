#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    vector<int> pNums, odd, even;

    cin >> count;
    for(int i = 0; i < count; i++)
    {
        int pNum;

        cin >> pNum;
        pNums.push_back(pNum);
    }
    sort(pNums.begin(), pNums.end());

    for(int num = 1; num <= pNums[pNums.size()-1]; num++)
    {
        bool isFound = false;
        for(int val : pNums)
            if (num == val)
            {
                isFound = true;
                break;
            }

        if (!isFound)
            if (num % 2 > 0)
                odd.push_back(num);
            else
                even.push_back(num);
    }

    for(int val : odd) cout << val << " ";
    cout << endl;
    for(int val : even) cout << val << " ";
}
#include <iostream>
using namespace std;

int main()
{
    unsigned int num, count = 0;
    cin >> num;

    for(int i = 0; num > 0; count++, num = num % 2 > 0 ? num - 1 : num >> 1);
    cout << count << endl;
}
#include <iostream>

using namespace std;

int main()
{
    char name[30];
    double salary, total = 0.00;

    cin >> name;
    cin >> salary;

    for(int i = 0; i < 12; i++)
    {
        double income;
        
        cin >> income;
        total += salary + (income * 15/100);
    }
    
    char result[255];
    sprintf(result, "%s %.2lf", name, total);

    cout << result << endl;
}
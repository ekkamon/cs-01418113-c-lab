#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);

    double salary = atof(s);
    double fee = 0.0;
    double balance = salary;

    if (salary < 0) {
        printf("Error: Salary must be greater or equal to 0");
        return 0;
    }

    if (salary > 300000.00) {
        fee += (300000 * 5/100) + ((salary - 300000) * 10/100);
    } else {
        fee += salary * 5/100;       
    }

    printf("%.2f", fee);
    
    return 0;
}
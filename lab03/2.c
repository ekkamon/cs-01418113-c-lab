#include <stdio.h>
#include <stdlib.h>

long gcd(long a, long b)
{
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    char m_str[100], n_str[100];

    fgets(m_str, 100, stdin);
    fgets(n_str, 100, stdin);

    long m = atoll(m_str), n = atoll(n_str);

    long _gcd = gcd(m, n);
    long _lcm = m * n / _gcd;

    printf("GCD: %lu\n", _gcd);
    printf("LCM: %lu", _lcm);

    return 0;

}
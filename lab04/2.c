#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
    int isPrime = 1;
    for(int i = 2; i < x; i++) {
        if (x != i && x % i == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);

  for (i = 2; i <= n; i++) {
      if (is_prime(i)) {
        printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}
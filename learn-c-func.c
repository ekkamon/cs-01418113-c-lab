#include <stdio.h>

int addTen(int x);
int addTwenty();
void addTenWithPointer(int *x);

// ----------- recursive function -----------

int add (int n)
{
    if (n == 0) {
        return 0;
    }

    return n + add(n - 1);
}

// ------------------------------------------

int  x = 1000;
int main()
{
    int x = 100;
    int y = addTen(x);

    //addTenWithPointer(&x);
    addTwenty();

    printf("in main x=%d y=%d address=%p\n", x, y, &x);
    printf("%d", add(5));
}

int addTen(int x) {
    x += 10;
    printf("in addTen x=%d\n", x);
    return x;
}

int addTwenty() {
    x += 10;
    return x;
}

void addTenWithPointer (int *x) {
    *x += 10;
}
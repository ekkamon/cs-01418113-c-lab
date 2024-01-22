#include <stdio.h>

void addTen(int *x) {
    *x += 10;
}

void foo(void *input)
{
    unsigned int *arr;
    arr = (unsigned int *)input;
    printf("%x %x\n", arr[0], arr[4]);
}

int main()
{
    // int a, b;
    // char str[20];

    // scanf("%d-%d %s", &a, &b, str);
    // printf("%p %d %d", str, a, b);

    // int x = 100;
    // int *ptr;

    // ptr = &x;

    // printf("x = %d, ref = %p\n", x, &x);
    // printf("ptr = %p, ref of ptr = %p\n", ptr, &ptr);
    // printf("deref ptr = %d\n", *ptr);

    // int data[5] = {10, 20, 30, 40, 50};

    // printf("data[0] = %d ref = %p\n", data[0], &data[0]);
    // printf("data = %p\n", data);
    // printf("deref of data[1] = %d\n", *(data + 1));


    // int *arrPtr = data;

    // char str[20] = "test";
    // for (int i = 0; *(str + i) != '\0'; i++)
    // {
    //     printf("%c\n", *(str+i));
    // }

    // int x = 1000;

    // addTen(&x);

    // printf("x = %d\n", x);

//   int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *pv;

//     pv = v;
//     pv = pv + 2;
//     printf("%d\n", pv - v);
//     pv++;
//     printf("%d\n", pv - v);

    unsigned int buf[] = {0, 0, 0, 1, 1, 0, 0, 0};
    foo(buf);
}
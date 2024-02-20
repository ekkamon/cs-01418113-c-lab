#include <stdio.h>

struct complex {
    float a, b, c, d;
};

struct complex add_complex(struct complex, struct complex);
struct complex multiply_complex(struct complex, struct complex);
void print_complex(char*, struct complex);

int main()
{
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);
    printf("Enter D: ");
    scanf("%f %f", &D.c, &D.d);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);
    
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex cNew;

    cNew.a = (C.a + D.c);
    cNew.b = (C.b + D.d);

    return cNew;
}

struct complex multiply_complex(struct complex C, struct complex D)
{
    struct complex cNew;

    cNew.a = ((C.a * D.c) - (C.b * D.d));
    cNew.b = ((C.a * D.d) + (C.b * D.c));

    return cNew;
};

void print_complex(char* formatted, struct complex cNew)
{
    printf("%s", formatted);

    if (cNew.a == 0.0 && cNew.b == 0.0)
    {
        puts("0.0");
        return;
    }

    if (cNew.a != 0.0)
        printf("%.1f", cNew.a);

    if (cNew.a != 0.0 && cNew.b != 0.0)
    {
        printf(" %s ", cNew.b < 0.0 ? "-" : "+");
        if (cNew.b < 0.0)
            cNew.b *= -1;
    }
    
    if (cNew.b != 0.0)
        printf("%.1fi", cNew.b);

    puts("");
}
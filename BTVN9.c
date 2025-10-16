#include <stdio.h>
#include <math.h>

int main() {
    int a = 3;
    int b = 4;
    int c = 2;

    float A;

    A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("Gia tri cua A = %.2f\n", A);
    return 0;
}

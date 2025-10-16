#include <stdio.h>
#include <math.h>  

int main() {
    int a = 2;
    int b = 3;
    int c = 1;

   float S;

    S = (pow(a, 2) + sqrt(pow(b, 2) + 4 * a * c)) / (2.0 * a)
        - (pow(b, 3) / pow(c, 2))
        + sqrt(fabs(a - b));

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("Gia tri cua S = %.4f\n", S);

    return 0;
}

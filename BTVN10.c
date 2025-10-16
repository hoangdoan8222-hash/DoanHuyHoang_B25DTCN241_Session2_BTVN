#include <stdio.h>
#include <math.h>  
int main() {
    int a = 3;
    int b = 4;
    int c = 2;

    float S;

     S = (sqrt(pow(a, 2) + pow(b, 2)) / (c + 1))
        + ((float)a * b / c)
        - sqrt(fabs(a - b) + pow(c, 2));

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("Gia tri cua S = %.2f\n", S);

    return 0;
}

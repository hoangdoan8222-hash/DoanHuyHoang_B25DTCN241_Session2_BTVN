#include <stdio.h>
#include <math.h>

int main(){
    // Khai b�o v� kh?i t?o gi� tr? cho c�c bi?n
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    // Khai b�o bi?n k?t qu?
    int A;

    // T�nh gi� tr? bi?u th?c: A = a * b - 2c + 3(a-d)
    A = a * b - 2 * c + 3 * (a - d);

    // Hi?n th? k?t qu?
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("Gia tri cua A = %d\n", A);

    return 0;
}

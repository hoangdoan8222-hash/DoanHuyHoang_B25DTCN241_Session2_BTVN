#include <stdio.h>
#include <math.h>

int main(){
// Khai b�o v� kh?i t?o 3 bi?n
    int a = 5;
    int b = 8;
    float c = 3.5;

    // Khai b�o bi?n luu k?t qu?
    float tongThuc; // t?ng c?a c? 3 s?
    int tongNguyen; // t?ng ph?n nguy�n c?a 3 s?

    // T�nh t?ng
    tongThuc = a + b + c;      // t?ng d?ng s? th?c
    tongNguyen = (int)a + (int)b + (int)c; // t?ng ph?n nguy�n

    // Hi?n th? k?t qu?
    printf("Gia tri a = %d\n", a);
    printf("Gia tri b = %d\n", b);
    printf("Gia tri c = %.2f\n", c);
    printf("Tong 3 so (float): %.2f\n", tongThuc);
    printf("Tong phan nguyen cua 3 so: %d\n", tongNguyen);

    return 0;
}

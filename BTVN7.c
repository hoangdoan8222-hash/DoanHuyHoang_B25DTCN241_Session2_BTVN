#include <stdio.h>

int main() {
    // Khai b�o v� kh?i t?o bi?n
    int number = 12345;
    int sum = 0;

    // Bi?n t?m d? kh�ng l�m thay d?i gi� tr? g?c
    int n = number;

    // T�ch t?ng ch? s? v� t�nh t?ng
    while (n > 0) {
        int digit = n % 10;   // L?y ch? s? cu?i
        sum += digit;         // C?ng v�o t?ng
        n = n / 10;           // B? ch? s? cu?i
    }

    // Hi?n th? k?t qu?
    printf("So ban dau: %d\n", number);
    printf("Tong cac chu so: %d\n", sum);

    return 0;
}

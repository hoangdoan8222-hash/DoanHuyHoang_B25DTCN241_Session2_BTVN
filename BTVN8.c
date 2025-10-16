#include <stdio.h>
#include <math.h>

int main() {
    // Khai b�o v� kh?i t?o bi?n
    int number = 12345;
    int result = 0;
    int n = number;  // Bi?n t?m d? x? l�

    // �?o ngu?c c�c ch? s?
    while (n > 0) {
        int digit = n % 10;         // L?y ch? s? cu?i
        result = result * 10 + digit; // Gh�p v�o k?t qu?
        n = n / 10;                 // B? ch? s? cu?i
    }

    // Hi?n th? k?t qu?
    printf("So ban dau: %d\n", number);
    printf("So dao nguoc: %d\n", result);

    return 0;
}

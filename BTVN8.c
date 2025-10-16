#include <stdio.h>
#include <math.h>

int main() {
    // Khai báo và kh?i t?o bi?n
    int number = 12345;
    int result = 0;
    int n = number;  // Bi?n t?m d? x? lý

    // Ð?o ngu?c các ch? s?
    while (n > 0) {
        int digit = n % 10;         // L?y ch? s? cu?i
        result = result * 10 + digit; // Ghép vào k?t qu?
        n = n / 10;                 // B? ch? s? cu?i
    }

    // Hi?n th? k?t qu?
    printf("So ban dau: %d\n", number);
    printf("So dao nguoc: %d\n", result);

    return 0;
}

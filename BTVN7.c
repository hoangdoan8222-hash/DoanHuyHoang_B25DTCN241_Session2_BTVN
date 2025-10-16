#include <stdio.h>

int main() {
    // Khai báo và kh?i t?o bi?n
    int number = 12345;
    int sum = 0;

    // Bi?n t?m d? không làm thay d?i giá tr? g?c
    int n = number;

    // Tách t?ng ch? s? và tính t?ng
    while (n > 0) {
        int digit = n % 10;   // L?y ch? s? cu?i
        sum += digit;         // C?ng vào t?ng
        n = n / 10;           // B? ch? s? cu?i
    }

    // Hi?n th? k?t qu?
    printf("So ban dau: %d\n", number);
    printf("Tong cac chu so: %d\n", sum);

    return 0;
}

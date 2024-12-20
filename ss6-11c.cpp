#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, count = 0, num = 2;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    printf("%d so nguyen to dau tien: ", n);
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}

#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void primePocket(int l) {
    int sum = 0;
    int count = 0;
    int num = 2;

    while (sum + num <= l) {
        if (isPrime(num)) {
            sum += num;
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    printf("%d", count);
}

int main() {
    int l = 20; // 口袋的承重量
    primePocket(l);

    return 0;
}

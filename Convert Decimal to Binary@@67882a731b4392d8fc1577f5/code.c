#include <stdio.h>
void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binary[32], i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}

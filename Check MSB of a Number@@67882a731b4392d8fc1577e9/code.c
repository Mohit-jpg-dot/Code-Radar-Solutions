#include <stdio.h>

int main() {
    int n, a;
    scanf("%d %d", &n, &a);

    if (n & (1 << a)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i;i<=a;i++){
        printf(a," x ",i,"= %d",a*i);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf(a," x ",i,"= %d",a*i);
    }
    return 0;
}
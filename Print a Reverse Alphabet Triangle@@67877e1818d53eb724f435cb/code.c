#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=a;j>i;j--){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
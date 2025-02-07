#include <stdio.h>
int main() {
    int a;
    int c=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        int c=c++;
    }
    printf("%d",c);
    return 0;
}
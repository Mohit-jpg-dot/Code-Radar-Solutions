#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    c=a^b;
    printf("%d %d",a,b);
    return 0;
}
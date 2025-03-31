#include <stdio.h>
int main() {
    int a,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=1;j<=i+1;j++){
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
}

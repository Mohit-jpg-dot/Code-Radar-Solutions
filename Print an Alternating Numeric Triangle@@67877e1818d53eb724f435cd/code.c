#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=2;j<=i+1;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
    return 0;
}
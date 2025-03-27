#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = 0;i<=a+1;i++){
        for(int k = a+1;k>i;k--){
            printf(" ");
        }
        for(int j = 1;j<i;j++){
            printf("%d",j);
        }
        for(int b = i;b>=1;b--){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
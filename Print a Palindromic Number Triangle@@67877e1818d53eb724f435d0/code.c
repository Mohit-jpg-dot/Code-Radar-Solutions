#include<stdio.h>
int main(){
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    for(int i = 1;i<=a+1;i++){
        for(int j = 1;j<i;j++){
            printf("%d",j);
        }
        for(int k = a;k=a;k--){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a;i<=a;i++){
        for(int j=a;j>1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
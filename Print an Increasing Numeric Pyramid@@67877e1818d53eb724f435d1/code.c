#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int k=0;k<(a-i);k++){
            printf(" ");
            }
        for(int j=1;j<i;j++){
            printf("%d",j);
            }
        printf(" \n");
        }
    return 0;
}
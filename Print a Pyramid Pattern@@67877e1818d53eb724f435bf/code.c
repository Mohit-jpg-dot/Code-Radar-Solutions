#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        if(i%2!=0){
            for(int k=0;k<(a-i);k++){
                printf(" ");
            }
            for(int j=0;j<i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
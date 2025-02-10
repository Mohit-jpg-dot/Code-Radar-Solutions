#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int j=i;j<=a;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
 
}
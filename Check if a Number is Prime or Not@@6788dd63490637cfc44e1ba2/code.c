#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>1){
        for(int i;i>=2;i++){
            if(i%a==0){
                printf("Not Prime");
            }
            else{
                printf("prime");
            }
        }
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
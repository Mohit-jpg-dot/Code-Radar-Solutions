#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>1){
        for(int i=2,a){
            if(a%i==0){
                printf("Not Prime");
                break;
            }
            else{
                printf("Prime");
            }
        }
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
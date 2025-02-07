#include <stdio.h>
#include <math.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>1){
        for(int i=2,a*a,i++){
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
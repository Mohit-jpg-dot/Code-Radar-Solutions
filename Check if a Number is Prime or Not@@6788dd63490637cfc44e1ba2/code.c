#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>1){
        for i in range(2,a){
            if(a%i==0){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }
    else{
        print("Not Prime");
    }
    return 0;
}
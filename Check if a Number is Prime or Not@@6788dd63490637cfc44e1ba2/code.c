#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int count=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            count++;
            break;
        }

    }
    if(count==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}
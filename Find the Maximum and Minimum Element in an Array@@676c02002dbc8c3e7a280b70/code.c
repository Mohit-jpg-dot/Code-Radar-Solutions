#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    int n = a
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int max = b[0];
    for(int i=1;i<n;i++){
        if(b[i]>max){
            max = b[i];
        }
    }
    int min = b[0];
    for(int i=1;i<n;i++){
        if(b[i]<min){
            min = b[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}
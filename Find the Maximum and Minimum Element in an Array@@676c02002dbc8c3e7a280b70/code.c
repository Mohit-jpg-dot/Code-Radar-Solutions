#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    int n = sizeof(b) / sizeof(b[0]);
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int max = b[0];
    for(int i=1;i<n;i++){
        if(b[i]>max){
            max = arr[i];
        }
    }
    int min = b[0];
    for(int i=1;i<n;i++){
        if(b[i]<min){
            max = arr[i];
        }
    }
    printf("%d %d",min.max);
    return 0;
}